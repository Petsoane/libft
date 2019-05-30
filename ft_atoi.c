/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:14:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/30 13:13:12 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	isspace(int n)
{
	if (n == '\t' || n == '\n' || n == '\v' || n == '\r' || n == '\f' || n == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *num)
{
	int	sign;
	int	out;

	out = 0;
	sign = 1;
	while (isspace(*num) == 1)
		num++;
	if (*num == '-')
	{
	
		sign = -1;
		num++;
	}
	while (*num >= '0' && *num <= '9')
	{
		out = (out * 10) + (*num - '0');
		num++;
	}
	return ((int)out * sign);
}
