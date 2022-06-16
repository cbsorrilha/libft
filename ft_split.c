/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:19:10 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/16 12:47:51 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_first_char(char *s, char c)
{
	size_t	k;
	char	*str;

	k = 0;
	while ((s[k] != c) && (s[k] != '\0'))
		k++;
	str = (char *)malloc(k + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (s[k] != c && s[k] != '\0')
	{
		str[k] = s[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

static size_t	ptr_count(char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if ((s[j] != c) && (j == 0))
			i++;
		else if ((s[j] != c) && (s[j - 1] == c))
			i++;
		j++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	size_t	k;
	size_t	z;
	size_t	count;
	char	**chars;
	char	*str;

	if (!s)
		return (NULL);
	k = 0;
	z = 0;
	str = (char *)s;
	count = ptr_count(str, c);
	chars = malloc((count + 1) * sizeof(char *));
	if (chars == NULL)
		return (NULL);
	while (z < count)
	{
		while ((str[k]) == c && str[k])
			k++;
		chars[z] = get_first_char(&str[k], c);
		k = k + ft_strlen(chars[z]);
		z++;
	}
	chars[z] = NULL;
	return (chars);
}
