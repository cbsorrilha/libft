/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:19:10 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/15 14:18:45 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_first_char(const char *s, char c)
{
	size_t	k;
	char	*str;

	k = 0;
	while ((s[k] != c) && (s[k] != '\0'))
		k++;
	str = (char *)malloc((k * sizeof(char)) + 1);
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

static size_t	ptr_count(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if ((s[j] != c) && ((s[j - 1] == c) || (j == 0)))
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

	if (!s)
		return (NULL);
	k = 0;
	z = 0;
	count = ptr_count(s, c);
	chars = (char **)malloc((count * sizeof(char *)) + 1);
	if (chars == NULL)
		return (NULL);
	while (z < count)
	{
		while ((s[k]) == c && s[k])
			k++;
		chars[z] = get_first_char(&s[k], c);
		k = k + ft_strlen(chars[z]);
		z++;
	}
	chars[z] = NULL;
	return (chars);
}
