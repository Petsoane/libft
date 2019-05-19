/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:52:56 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 13:56:00 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s);
void	ft_putchar(char c);

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
