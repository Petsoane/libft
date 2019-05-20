/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:50:04 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 14:51:52 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *s, int n, size_t len);

void	bzero(void *s, int n)
{
	memset(s, 0, n);
}