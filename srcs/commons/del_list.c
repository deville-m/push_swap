/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:13:34 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 13:17:28 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void		del_list(t_dlist **head)
{
	t_dlist *tmp;

	if (!head || !*head)
		return ;
	(*head)->prev->next = NULL;
	while (*head)
	{
		tmp = *head->next;
		free(*head);
		*head = tmp;
	}
}
