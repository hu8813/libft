/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:42 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/10 18:48:59 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;

	str = (unsigned char *)s;

	while (i < n)
		{
			if (str[i] == (unsigned char) c)
				return ((unsigned char*)&str[i]);
			str++;
			i++;
		}
	return ((unsigned char *)NULL);
}

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 29);
   //ret = memchr(str, ch, 29);

   printf("String after |%c| is - |%p|\n", ch, ret);
   
   return(0);
}