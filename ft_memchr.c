/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:48:40 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/16 15:05:26 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	char			*nc;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
		{
			nc = &((char *)s)[i];
			return (nc);
		}
		i++;
	}
	return (NULL);
}
