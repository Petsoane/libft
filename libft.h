/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:06:08 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 09:53:24 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
#	define LIBFT_H

#	include <stdlib.h>

void 	*ft_memalloc(size_t size);
void 	*ft_memalloc(size_t size);i
char 	*ft_strnew(size_t size);
void 	ft_strclr(char *s);
void 	ft_striter(char *s, void (*f)(char *));
void 	ft_striteri(char *s, void (*f)(unsigned int, char *));
char 	*ft_strmap(char const *s, char (*f)(char));
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int 	ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);
char 	*ft_strsub(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s);
char 	**ft_strsplit(char const *s, char c);
char 	*ft_itoa(int n);
void 	ft_putchar(char c);
void 	ft_putstr(char const *s);
void 	ft_putendl(char const *s);
void 	ft_putnbr(int n);
void 	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char const *s, int fd);
void 	ft_putendl_fd(char const *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		*ft_memcmp(const void *s1, const void *s2, size_t n)
#endif

