/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 12:49:28 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 13:00:40 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	add_elem(t_dlist **head, t_dlist *elem)
{
	if (!head || !elem)
		return ;
	if (!*head)
	{
		elem->next = elem;
		elem->prev = elem;
		*head = elem;
	}
	else
	{
		elem->next = *head;
		elem->prev = (*head)->prev;
		(*head)->prev->next = elem;
		(*head)->prev = elem;
		*head = elem;
	}
}
