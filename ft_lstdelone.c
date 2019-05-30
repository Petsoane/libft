/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:31:05 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/30 09:26:44 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list **node, void (*del)(void *, size_t len))
{
	del(&((*node)->content), (*node)->content_size);
	free(node);
	*node = NULL;
}
