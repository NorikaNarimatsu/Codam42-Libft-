/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:47:38 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/17 19:32:19 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_char;

	s_char = (char *)s;
	while (n > 0)
	{
		*s_char = '\0';
		s_char++;
		n--;
	}
}

//#include <string.h>
//#include <stdio.h>
//int main( void )
//{
//	char buffer[80]= "Norika";
//	char buffer2[80]= "Norika";

//	// Initialize both buffers with '\0'
//	ft_memset(buffer, '\0', 80);
//	printf("After Initialization:\n");
//	printf("buffer: %s\n", buffer);
//	printf("buffer2: %s\n", buffer2);

//	bzero( buffer, 5 );
//	ft_bzero(buffer2, 5);
//	printf("After function:\n");

//	printf("buffer: %s\n", buffer);
//	printf("buffer2: %s\n", buffer2);
//	return 0;
//}
