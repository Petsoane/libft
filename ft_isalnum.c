/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:39:59 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:44 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int ch);
int		ft_isdigit(int num);

int		ft_isalnum(int num)
{
	return (ft_isalpha(num) && ft_isdigit(num));
}

