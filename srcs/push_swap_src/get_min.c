/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:40:58 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 20:48:59 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
		curr = curr->next;
		if (curr->pos < min->pos)
			min = curr;
	}
	return (min);
}
