/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 18:21:57 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 18:15:29 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commons.h"

void	set_pos(t_dlist **head)
{
	int		i;
	t_dlist	*cpy;
	t_dlist	*curr;
	t_dlist	*tmp;

	if (!head || !*head)
		return ;
	cpy = lstcpy(head);
	lstsort(&cpy);
	curr = cpy;
	i = 1;
	while (1)
	{
		tmp = find_elem(head, curr->data);
		tmp->pos = i++;
		tmp->placed = 0;
		curr = curr->next;
		if (curr == cpy)
			break ;
	}
	del_list(&cpy);
}
