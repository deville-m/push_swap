/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:53:45 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 19:11:27 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist		*find_elem(t_dlist **head, int data)
{
	t_dlist *curr;

	if (!head || !*head)
		return (NULL);
	curr = *head;
	while (1)
	{
		if (curr->data == data)
			return (curr);
		curr = curr->next;
		if (curr == *head)
			break ;
	}
	return (NULL);
}
