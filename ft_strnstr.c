/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:30:55 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/10 02:10:40 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	h_i;
	size_t	n_i;
	char	*first;

	h_i = 0;
	n_i = 0;
	if (ft_strlen((char *)n) == 0)
		return ((char *)h);
	while (h[h_i] != n[n_i])
	{
		if (h_i == len - 1 || h[h_i] == '\0')
			return (NULL);
		h_i++;
	}
	first = &((char *)h)[h_i];
	while (n[n_i] != '\0')
	{
		if (n[n_i] != h[h_i])
			return (NULL);
		h_i++;
		n_i++;
	}
	return (first);
}
