/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:41 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:07 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(const char c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	char c1 = 'a';
	char c2 = 128;


	printf("char: %c is Ascii or not: %d\n", c1, ft_isascii(c1));
	printf("char: %c is Ascii or not: %d\n", c2, ft_isascii(c2));
	printf("%d\n",isascii('a'));
	printf("%d\n",isascii(128));
}
*/
