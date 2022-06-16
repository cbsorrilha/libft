/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:48:19 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 14:35:20 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	total = dstsize - dst_len - 1;
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (i < total && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
