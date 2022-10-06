/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:43 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:09 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(const char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}
/*
#include <stdio.h>
int	main (void)
{
	char c1 = 'B';
	char c2 = 'd';


	printf("char: %c, and in uppercase %c\n", c1, ft_toupper(c1));
	printf("char: %c, and in uppercase %c\n", c2, ft_toupper(c2));
}
*/
