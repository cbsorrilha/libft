/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:03:17 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 15:13:33 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((dst == NULL) && (src == NULL))
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
