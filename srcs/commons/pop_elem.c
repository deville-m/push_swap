/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:01:09 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 13:12:04 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist		*pop_elem(t_dlist **head)
{
	t_dlist *res;

	if (!head || !*head)
		return (NULL);
	res = *head;
	if (*head->next == *head)
	{
		*head = NULL;
		return (res);
	}
	(*head)->prev->next = (*head)->next;
	(*head)->next->prev = (*head)->prev;
	*head = (*head)->next;
	return (res);
}
