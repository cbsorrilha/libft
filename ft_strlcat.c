/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:48:19 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/10 01:31:42 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	offset;
	size_t	src_index;

	d_len = ft_strlen(dst);
	s_len = ft_strlen((char *)src);
	offset = d_len;
	src_index = 0;
	if (size < d_len)
	{
		return (d_len + s_len);
	}
	while (*(src + src_index) != '\0')
	{
		*(dst + offset) = *(src + src_index);
		offset++;
		src_index++;
		if (offset == size - 1)
			break ;
	}
	*(dst + offset) = '\0';
	return (d_len + s_len);
}
