/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:41:28 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 19:45:35 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_sort(t_dlist **head)
{
	t_dlist	*curr;
	int		last;

	if (!head || !*head)
		return (0);
	last = (*head)->data;
	curr = (*head)->next;
	while (curr != *head)
	{
		if (last >= curr->data)
			return (0);
		curr = curr->next;
	}
	return (1);
}
