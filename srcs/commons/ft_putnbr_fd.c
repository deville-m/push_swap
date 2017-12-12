/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 16:17:32 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 21:42:06 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	ft_putnbr_fd(const int fd, int n)
{
	int c;

	if (n == -2147483648)
	{
		ft_putstr_fd(fd, "-2147483648");
		return ;
	}
	else if (n < 0)
	{
		n = -n;
		c = '-';
		write(fd, &c, 1);
	}
	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(fd, n / 10);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}
