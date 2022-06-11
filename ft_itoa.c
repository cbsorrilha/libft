/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:27:52 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/11 12:11:42 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	calculate_int_length(int i)
{
	size_t	c;

	c = 0;
	while (i / 10 > 9)
	{
		i /= 10;
		c++;
	}
	c++;
	return (c);
}

char	*ft_itoa(int n)
{
	size_t	c;
	int		nbr;
	char	*s;
	int		is_negative;

	nbr = n;
	c = calculate_int_length(n);
	if (n < 0)
	{
		n = (n + 1) * (-1);
		is_negative = 1;
		c++;
	}
	s = malloc(c);
	while (c--)
	{
		s[c] = n % 10 + 48;
		n /= 10;
	}
	return (s);
}
