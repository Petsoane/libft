/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:41:42 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/21 10:25:39 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strrev(char *s)
{
	char *start;
	char *end;
	char temp;

	start = s;
	while (*s)
		s++;
	end = s - 1;
	while (start != end)
	{
		temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}

char	*ft_itoa(int num)
{
	char	*out;
	int		size;
	int		temp;
	int		i;

	i = 0;
	temp = num;
	size = 0;
	while (temp > 10)
	{
		size += 1;
		temp /= 10;
	}
	out = (char *)malloc(sizeof(char) * size);
	while (num > 10)
	{
		out[i++] = (num % 10) + (int)'0';
		num /= 10;
	}
	out[i] = num + '0';
	ft_strrev(out);
	return (out);
}
