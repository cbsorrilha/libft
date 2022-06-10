/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:13:07 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/08 19:29:14 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned long	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < len)
	{
		c1 = ((unsigned char *)s1)[i];
		c2 = ((unsigned char *)s2)[i];
		if (c1 != c2)
		{
			return ((int ) c1 - c2);
		}
		i++;
	}
	return (0);
}
