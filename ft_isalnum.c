/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:54:48 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/16 15:03:13 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) > 0) || (ft_isdigit(c) > 0))
	{
		return (1);
	}
	return (0);
}
