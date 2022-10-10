/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:43 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/10 17:11:31 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace (char c)
{
	if (c == ' ' || c == '\t' )
		return (1);

	return (0);
}

char *ft_strtrim(char const *str)
{
	char *s;
	size_t a;
	size_t b;
	size_t c;

	a = 0;
	b = 0;
	c = 0;

	s = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!s)
		return (NULL);

	while (ft_isspace(str[a]))
		a++;

	if (str[a] == '\0')
		return("");
	b = ft_strlen(str) - 1;
	while (ft_isspace(str[b]))
		b--;
	
	c = b - a + 1;  
	
	while (c)
	{
		c--;
		s[c] = str[c + a];
		
	}

	return (s);
}

int	main(void)
{
	char *s1 = "  hello ";
	char *s2 = " ";

	printf("%s\n", ft_strtrim(s1));
	printf("%s\n", ft_strtrim(s2));
}