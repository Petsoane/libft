/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 08:20:08 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/06/21 08:49:08 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("%d\n", ft_memcmp("aaa","aab", 4));
	ft_putendl_fd("This is a simple string\n", 1);
	return (0);
}
