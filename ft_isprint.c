/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:41 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:07 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(const char c)
{
	if (c >= 32 && c <= 126)
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


	printf("char: %c is printable or not: %d\n", c1, ft_isprint(c1));
	printf("char: %c is printable or not: %d\n", c2, ft_isprint(c2));
}
*/
