/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:32:38 by csorrilh          #+#    #+#             */
/*   Updated: 2022/05/30 16:52:05 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* span = 40 because of the space between characters in the ascii table */
int	ft_tolower(int ch)
{
	int	span;

	span = 32;
	if (ch >= 65 && ch <= 90)
	{
		return (ch + span);
	}
	return (ch);
}
