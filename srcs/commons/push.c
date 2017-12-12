/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:36:06 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 19:39:17 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	push(t_dlist **src, t_dlist **dest)
{
	if (!src || !dest)
		return ;
	add_elem(dest, pop_elem(src));
}
