/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:41:28 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/03 17:31:00 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_sort(t_dlist **head)
{
	t_dlist	*curr;
	int		last;

	if (!head)
		return (0);
	if (!*head)
		return (1);
	last = (*head)->data;
	curr = (*head)->next;
	while (curr != *head)
	{
		if (last >= curr->data)
			return (0);
		last = curr->data;
		curr = curr->next;
	}
	return (1);
}
