/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 11:52:07 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 13:00:53 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist			*new_elem(int data)
{
	t_dlist *res;

	if (!(res = (t_dlist *)malloc(sizeof(t_dlist *))))
		return (NULL);
	res->data = data;
	return (res);
}
