/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:59:42 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 18:42:58 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "commons.h"

/*
** Utility functions
*/

int		lstlen(t_dlist *list);
t_dlist	*lstcpy(t_dlist **head);
void	lstsort(t_dlist **head);
void	set_pos(t_dlist **head);

#endif
