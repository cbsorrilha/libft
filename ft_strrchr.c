/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:40:57 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 15:26:14 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	len;
	char			*ns;

	ns = (char *)s;
	len = ft_strlen(ns);
	if (c == '\0' && ns[len] == c)
	{
		return (&ns[len]);
	}
	while (len--)
	{
		if (ns[len] == (char)c)
		{
			return (&ns[len]);
		}
	}
	return (NULL);
}
