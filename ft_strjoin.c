/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:37:39 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/06/21 08:27:26 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		o_size;
	char	*out;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return ((char *)s2);
	else if (ft_strlen(s2) == 0)
		return ((char *)s1);
	o_size = ft_strlen(s1) + ft_strlen(s2);
	out = (char *)malloc(o_size - 1);
	if (!out)
		return (NULL);
	ft_strcpy(out, s1);
	ft_strcat(out, s2);
	return (out);
}
