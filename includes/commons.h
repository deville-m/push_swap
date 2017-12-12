/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commons.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 11:24:28 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 14:55:24 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMONS_H
# define COMMONS_H

# include <stdlib.h>

/*
** This is a file containing prototypes needed by both executables, such as
** standard functions (strcmp, strchr, etc...).
** And doubly-linked list manipulations.
*/

/*
** This project uses doubly linked circular list, as it fits well with
** the algorithmic part
*/

typedef struct		s_dlist
{
	int				data;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

typedef struct		s_stack
{
	t_dlist			**a;
	t_dlist			**b;
}					t_stack;

t_dlist				*new_elem(int data);
t_dlist				*pop_elem(t_dlist **head);
t_dlist				*init_list(int ac, char **av);
void				add_elem(t_dlist **head, t_dlist *elem);
void				add_back(t_dlist **head, t_dlist *elem);
void				del_list(t_dlist **head);
void				rotate(t_dlist **head);
void				rotate_stack(t_stack stack);
void				r_rotate(t_dlist **head);
void				r_rotate_stack(t_stack stack);

/*
** Basic functions from libft
*/

int		ft_atoi(const char *str);
int		str_isnumber(const char *str);
int		ft_strcmp(const char *s1, const char *s2);

#endif
