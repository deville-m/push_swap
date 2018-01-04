/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:50:28 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/03 16:59:22 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

int		lstlen(t_dlist *list)
{
	t_dlist	*curr;
	int		len;

	if (!list)
		return (0);
	len = 1;
	curr = list;
	while (curr->next != list)
	{
		curr = curr->next;
		++len;
	}
	return (len);
}
