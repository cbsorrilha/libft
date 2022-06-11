/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:53:23 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/11 16:13:51 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;

	i = 0;
	c = malloc(len + 1);
	if (c == NULL)
		return (NULL);
	while ((i < len) && (s[start + i] != '\0'))
	{
		c[i] = s[start + i];
		i++;
	}
	c[start + i + 1] = '\0';
	return (c);
}
