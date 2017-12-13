/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:43:55 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/13 20:38:36 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

static int			check_char(const char *str, int i)
{
	return ((str[0] == ' ' && i != 0 && (ft_isdigit(str[1]) || str[1] == '-'))
			|| (str[0] == '-' && ft_isdigit(str[1]))
			|| ft_isdigit(str[0]));
}

static t_dlist		*one_arg(const char *str)
{
	t_dlist		*head;
	t_dlist		*elem;
	long int	tmp;
	int			i;

	head = NULL;
	i = 0;
	while (str[i])
	{
		elem = NULL;
		if (!check_char(str + i, i) || (tmp = ft_atoi(str + i)) > 2147483647l
			|| tmp < -2147483648l || !(elem = new_elem(tmp))
			|| (head && find_elem(&head, elem->data)))
		{
			free(elem);
			del_list(&head);
			return (NULL);
		}
		if (str[i] == ' ' && (i += 1))
			continue;
		add_back(&head, elem);
		while (ft_isdigit(str[i]) || str[i] == '-')
			i++;
	}
	return (head);
}

t_dlist				*init_list(int ac, char **av)
{
	t_dlist		*head;
	t_dlist		*elem;
	long int	tmp;

	if (ac == 2)
		return (one_arg(av[1]));
	head = NULL;
	ac -= 1;
	while (ac > 0)
	{
		elem = NULL;
		if (!str_isnumber(av[ac])
			|| (tmp = ft_atoi(av[ac])) > 2147483647l
			|| tmp < -2147483648l
			|| !(elem = new_elem(tmp))
			|| (head && find_elem(&head, elem->data)))
		{
			free(elem);
			del_list(&head);
			return (NULL);
		}
		add_elem(&head, elem);
		ac -= 1;
	}
	return (head);
}
