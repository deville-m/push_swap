/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:59:42 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 19:47:01 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "commons.h"

/*
** Utility functions
*/

int		lstlen(t_dlist **list);
t_dlist	*lstcpy(t_dlist **head);
t_dlist	*get_min(t_dlist **head);
void	lstsort(t_dlist **head);
void	set_pos(t_dlist **head);

/*
** Instruction loggers
*/

void	sa(t_stack stack);
void	sb(t_stack stack);
void	ss(t_stack stack);
void	pa(t_stack stack);
void	pb(t_stack stack);
void	ra(t_stack stack);
void	rb(t_stack stack);
void	rr(t_stack stack);
void	rra(t_stack stack);
void	rrb(t_stack stack);
void	rrr(t_stack stack);

/*
** Sorting algorithms
*/

void	get_closer(t_stack stack, int i);
int		trivial_case(t_stack stack, int i);
void	insertion_sort(t_stack stack, int len);
void	partition_a(t_stack stack);
void	partition_b(t_stack stack);
void	quick_sort(t_stack stack);

#endif
