/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:49:40 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 22:18:59 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	print_stack(t_stack stack)
{
	ft_putstr_fd(1, "a: ");
	print_list(stack.a);
	ft_putstr_fd(1, "b: ");
	print_list(stack.b);
}
