/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 15:04:09 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 18:33:14 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "commons.h"
# include "get_next_line.h"

int		check_sort(t_dlist **head);
int		apply_instructions(t_stack stack);

#endif
