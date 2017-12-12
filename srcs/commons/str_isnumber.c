/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_isnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:17:31 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 14:51:14 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

int		str_isnumber(const char *str)
{
	int i;

	if (!str
		|| ft_strcmp(str, "2147483647") > 0
		|| (*str == '-' && ft_strcmp(str + 1, "2147483648") > 0))
		return (0);
	i = 0;
	i = (str[i] == '-') ? i + 1 : i;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (i > 0 && str[i - 1] != '-')
		return (1);
	return (0);
}
