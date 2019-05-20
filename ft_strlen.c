/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:52:32 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 13:54:34 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char const *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len + 1);
}
