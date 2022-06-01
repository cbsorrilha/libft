/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:56:34 by csorrilh          #+#    #+#             */
/*   Updated: 2022/05/31 18:11:24 by csorrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isalpha(int argument);
int		ft_isdigit(int argument);
int		ft_isalnum(int argument);
int		ft_isascii(int argument);
int		ft_isprint(int argument);
int		ft_tolower(int argument);
int		ft_toupper(int argument);
size_t	ft_strlen(char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif
