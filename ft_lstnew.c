/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:36:08 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/30 09:41:55 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *cont, size_t c_size)
{
	t_list	*out;
	void 	*cpy;
	
	cpy = malloc(c_size);
	cpy = ft_memcpy(cpy, cont, c_size);
	out = (t_list *)malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	if (cont == NULL)
	{
		out->content= NULL;
		out->content_size= 0;
		out->next = NULL;
	}
	else
	{
		out->content = (void *)cpy;
		out->content_size= c_size;
		out->next = NULL;
	}
	return (out);
}
