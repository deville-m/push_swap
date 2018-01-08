/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:40:58 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 13:43:54 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist	*get_min(t_dlist **head)
{
	t_dlist	*min;
	t_dlist	*curr;

	if (!head || !*head)
		return (NULL);
	curr = *head;
	min = curr;
	while (curr->next != *head)
	{
		if (curr->pos < min->pos)
			min = curr;
		curr = curr->next;
	}
	return (min);
}
