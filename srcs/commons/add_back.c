/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:37:11 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 13:38:38 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	add_back(t_dlist **head, t_dlist *elem)
{
	if (!head)
		return ;
	add_elem(head, elem);
	rotate(head);
}
