/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:14:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/27 11:02:19 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_atoi(const char *num)
{
	int base;
	int	out;
	int	start;
	int	end;

	end = 0;
	start = 0;
	base = 1;
	out = 0;
	if (num[0] == '-')
		end = 1;
	while (num[start])
		start++;
	start--;
	while (start != end)
	{
		out += (num[start--] - '0') * base;
		base *= 10;
	}
	out += (num[start] - '0') * base;
	out *= num[0] == '-' ? -1 : 1;
	return (out);
}
