/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:49:01 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/01 16:02:34 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*itoa 256 % 10 = i6
 *
 * Espaços, ele pode ter quantidade abritraria de espaços e precisa ignorar
 * Pode ter UM sinal, positivo ou negativo ()++ é inválido
 * enquanto ft_isdigit
 * res + (res * 10) + digito - 48
 */
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include"libft.h"

int	atoi(const char *str)
{
	int	i;
	int	res;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		return (0);
	}
	return (res);
}

int main()
{
	char str[20];

	strcpy(str, "    -98993489");

	atoi(str);
	return (0);
}
