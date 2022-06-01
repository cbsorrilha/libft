/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:39:53 by csorrilh          #+#    #+#             */
/*   Updated: 2022/05/30 16:51:05 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* span = 40 because of the distance between upper */
/* and lower case characters in ascci table*/
int	ft_toupper(int ch)
{
	int	span;

	span = 32;
	if (ch >= 97 && ch <= 122)
	{
		return (ch - span);
	}
	return (ch);
}
