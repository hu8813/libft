/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:41 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:07 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if ((c >= '0' && c <= '9'))
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
	char c2 = '5';


	printf("char: %c is alphanumeric or not: %d\n", c1, ft_isalnum(c1));
	printf("char: %c is alphanumeric or not: %d\n", c2, ft_isalnum(c2));
}
*/
