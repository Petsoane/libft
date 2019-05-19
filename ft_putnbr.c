/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:57:17 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 14:39:45 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char ch;
	char sign;

	if (num < 0)
	{
		sign = '-';
		write(1, &sign, 1);
		num = -num;
	}
	if (num < 10)
	{
		ch = (num % 10 ) + '0';
	}
	else
	{
		ch = (num % 10 ) + '0';
		ft_putnbr(num / 10);
	}
	write(1, &ch, 1);
}
