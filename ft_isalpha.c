/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:33:03 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/21 08:21:58 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int num)
{
	if (num >= 'a' && num <= 'z')
		return (1);
	else if (num >= 'A' && num <= 'Z')
		return (1);
	return (0);
}
