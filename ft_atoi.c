/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:10:54 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 15:04:56 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	is_ignored(char c)
{
	if ((c >= 0 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

static int	ignore_spaces(const char *str)
{
	int	i;

	i = 0;
	while (is_ignored(str[i]))
	{
		i++;
	}
	return (i);
}

static int	valid(int sig)
{
	if (sig > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		is_negative;
	long	result;
	long	tmp;

	result = 0;
	is_negative = 1;
	str = str + ignore_spaces(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (ft_isdigit(*str))
	{
		tmp = result;
		result = (result * 10) + *str++ - 48;
		if (result < tmp)
			return (valid(is_negative));
	}
	return (is_negative * result);
}
