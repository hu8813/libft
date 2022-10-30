/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:42 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/16 16:32:35 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != (char)c && ptr[i] != '\0')
		i++;
	if (ptr[i] == (char)c)
		return ((char *)&ptr[i]);
	if (!c && ptr[i] == '\0')
		return ((char *)&ptr[i]);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr ("hello",'l'));
	printf("%s\n", strchr ("hello",'o'));
	return (0);
}
*/