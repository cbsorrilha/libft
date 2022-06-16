/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 00:16:21 by csorrilh          #+#    #+#             */
/*   Updated: 2022/06/16 00:22:35 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	new->next = NULL;
	if (!(ft_lstsize(last)))
	{
		*last = *new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
