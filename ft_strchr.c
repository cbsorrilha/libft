/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:52:59 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 15:21:45 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*found;

	found = NULL;
	if (*s == (char)c)
	{
		found = (char *)s;
		return (found);
	}
	while (*s++)
	{
		if (*s == (char)c)
		{
			found = (char *)s;
			break ;
		}
	}
	return (found);
}
