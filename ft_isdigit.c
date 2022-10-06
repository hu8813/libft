/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:41 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:07 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(const char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main (void)
{
	char c1 = 'a';
	char c2 = '5';


	printf("char: %c is digit or not: %d\n", c1, ft_isdigit(c1));
	printf("char: %c is digit or not: %d\n", c2, ft_isdigit(c2));
}
*/
