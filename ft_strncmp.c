/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:07:27 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/09 18:03:09 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					found;
	unsigned long		i;
	unsigned char		tmp_c1;
	unsigned char		tmp_c2;

	i = 0;
	found = 0;
	while (i < n)
	{
		tmp_c1 = ((unsigned char *)s1)[i];
		tmp_c2 = ((unsigned char *)s2)[i];
		if (found == 1)
			return (0);
		if (tmp_c1 != tmp_c2)
			return ((int ) tmp_c1 - tmp_c2);
		if (tmp_c1 == '\0')
			found = 1;
		i++;
	}
	return (0);
}
