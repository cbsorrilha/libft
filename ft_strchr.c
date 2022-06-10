/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:52:59 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/06 12:21:33 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strchr(char *s, int c)
{
	char	*found;

	found = NULL;
	if (*s == (char)c)
	{
		found = s;
		return (found);
	}
	while (*s++)
	{
		if (*s == (char)c)
		{
			found = s;
			break ;
		}
	}
	return (found);
}
