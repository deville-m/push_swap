/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:02:52 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 20:06:29 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	ft_putstr_fd(const int fd, const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(fd, str, i);
}
