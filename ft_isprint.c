/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:41 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/13 16:24:27 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main (void)
{
	int	c1;
	int	c2;

	c1 = 'a';
	c2 = '5';
	printf("char: %c is printable or not: %d\n", c1, ft_isprint(c1));
	printf("char: %c is printable or not: %d\n", c2, ft_isprint(c2));
}
*/
