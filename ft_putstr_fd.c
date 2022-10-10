/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:42 by huaydin           #+#    #+#             */
/*   Updated: 2022/10/10 14:36:04 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *c, int fd)
{
	write(fd, &c, ft_strlen(c));

}

/*
 O_RDONLY
 FILE *fopen(const char *pathname, const char *mode);

 FILE *fopen(const char *pathname, O_RDONLY);
 
fd = fopen(const char *pathname, O_RDONLY);	
*/
/*
int	main(void)
{
FILE *fd;
int c;

if ((fd = fopen("ft_isascii.c", "r")) == NULL)
	printf("Could not open file for reading\n");


while(1) {
      c = fgetc(fd);
      if( feof(fd) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(fd);

return (0);
}
*/