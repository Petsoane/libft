/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isidigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:37:14 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 16:39:04 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int ch)
{
	if (ch >= '0'&& ch <= '9')
		return (1);
	return (0);
}