/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:43 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/10 18:34:06 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void ft_putchar(int c);
void ft_putchar_fd(const char c,const int fd);
void ft_putendl_fd(const char c,const int fd);
int ft_putnbr_fd();
void ft_putstr_fd(const char *c,int fd);
void ft_split(void);
char *ft_strdup(const char *s);
size_t ft_strlen(const char *s);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_memset(void *s, int c, size_t n);

#endif
