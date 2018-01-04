/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:27:31 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 18:46:21 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	print_list(t_dlist **head)
{
	t_dlist *curr;

	if (!head)
		return ;
	if (!*head)
		return (ft_putstr_fd(1, "(null)\n"));
	curr = *head;
	ft_putnbr_fd(1, (*head)->data);
	write(1, ":", 1);
	ft_putnbr_fd(1, (*head)->pos);
	while (curr->next != *head)
	{
		curr = curr->next;
		write(1, " ", 1);
		ft_putnbr_fd(1, curr->data);
		write(1, ":", 1);
		ft_putnbr_fd(1, curr->pos);
	}
	write(1, "\n", 1);
}
