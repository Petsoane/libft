/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:07:22 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 15:26:38 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *num)
{
	int 	base;
	int		out;
	int		start;
	
	start = 0;
	base = 1;
	out = 0;
	while (num[start])
		start++;
	start--;
	while (start != 0)
	{
		out += (num[start--] - '0') * base;
		base *= 10;
	}
	out += (num[start] - '0') * base;
	return (out);
}
