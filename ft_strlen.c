/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:42 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:09 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

long int	ft_strlen(const char *c)
{
	long unsigned int	length;

	length = 0;
	while (*c && *c++ != '\0')
		length++;
	return (length);
}
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char *s1 = "re";
	char *s2 = "Test string";

	printf("string: %s length: %ld\n", s1, ft_strlen(s1));
	printf("string: %s length: %ld\n", s2, ft_strlen(s2));
	printf("string: %s length: %ld\n", s1, strlen(s1));
	printf("string: %s length: %ld\n", s2, strlen(s2));
}
*/
