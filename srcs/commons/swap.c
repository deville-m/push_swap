/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:31:35 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 19:33:57 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	swap(t_dlist **head)
{
	t_dlist *tmp;

	if (!head || !*head)
		return ;
	tmp = pop_elem(head);
	rotate(head);
	add_elem(head, tmp);
	r_rotate(head);
}
