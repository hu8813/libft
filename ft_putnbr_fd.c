/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:42 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/06 15:07:08 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_putnbr_fd()
{

}

/*
 O_RDONLY
 FILE *fopen(const char *pathname, const char *mode);

 FILE *fopen(const char *pathname, O_RDONLY);
 
fd = fopen(const char *pathname, O_RDONLY);	
*/

int	main(void)
{
FILE *fd;

if ((fd = fopen("ft_isascii.c", "r")) == NULL)
	printf("Could not open file for reading\n");

printf("%d", putnbr_fd(fd));
}


