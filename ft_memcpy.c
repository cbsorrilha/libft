/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:18 by csorrilh          #+#    #+#             */
/*   Updated: 2022/05/31 18:19:21 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*tmp_dest;
	const char	*tmp_src;

	tmp_dest = (char *)dst;
	tmp_src = (const char *)src;
	if ((tmp_dest == NULL) || (tmp_src == NULL))
	{
		return (dst);
	}
	while (n--)
	{
		*(tmp_dest++) = *(tmp_src++);
	}
	return (dst);
}
