/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:53:23 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 15:28:02 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;

	i = 0;
	if (s == (void *)0)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len <= (ft_strlen((char *)s) - start))
		c = malloc(len + 1);
	else
		c = malloc(ft_strlen((char *)s) + 1 - start);
	if (c == NULL)
		return (NULL);
	while ((i < len) && (s[start + i] != '\0'))
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
