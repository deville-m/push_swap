/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 18:00:36 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 19:03:31 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist		*lstcpy(t_dlist **list)
{
	t_dlist *res;
	t_dlist *curr;

	if (!list || !*list)
		return (NULL);
	res = NULL;
	curr = *list;
	while (1)
	{
		add_elem(&res, new_elem(curr->data));
		curr = curr->next;
		if (curr == *list)
			break ;
	}
	return (res);
}
