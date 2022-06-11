/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:48:40 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/08 19:11:22 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned long	i;
	char			*nc;

	i = 0;
	while (i < len)
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
