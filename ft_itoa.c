/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:41:42 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 13:40:33 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char 	*ft_itoa(int num)
{
	char 	*out;
	int		count;
	int 	temp;
	int 	i;

	i = 0;
	count = 0;
	temp = num;
	while (temp != 0)
	{
		count++;
		temp /= 10;
	}
	if (temp == 0)
		count++;
	out = (char *)malloc(sizeof(char) * (count));
	if (!out)
		return (NULL);
	
	while (count != 0)
	{
		out[i++] = (num % 10) + '0';
		num /= 10;
		count--;
	}
	out[i] = '\0';
	if (out != 0)
		ft_strrev(out);
	else
		return (0);
	return (out);
}
