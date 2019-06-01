/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:44:38 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/06/01 11:18:20 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*prev;
	t_list	*new;
	t_list	*head;

	prev = NULL;
	while (lst == NULL)
	{
		if (!(out = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		out = f(lst);
		if (prev == NULL)
			head = new;
		else 
			prev->next  = new;
		prev = new;
		lst = lst->next;
	}
	return (head);
}
