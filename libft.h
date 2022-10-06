/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:43 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:09 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT.H
#define LIBFT.H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <memory.h>
#include <string.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_putnbr_fd();
int ft_putstr_fd();
long int ft_strlen(const char *c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
