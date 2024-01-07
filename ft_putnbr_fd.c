/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:28:30 by nnarimat          #+#    #+#             */
/*   Updated: 2023/11/02 12:44:12 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		c = n % 10 - '0';
		n /= 10;
		c = -c;
		n = -n;
		write(fd, "-", 1);
	}
	else
	{
		c = n % 10 + '0';
		n /= 10;
	}
	if (n > 0)
		ft_putnbr_fd(n, fd);
	write(fd, &c, 1);
}

//	//if (n == -2147483648)
//	//{
//	//	write(fd, "-2147483648", 11);
//	//	return ;
//	//}

//#include <limits.h>

//int main(void)
//{
//	int i = -2147483648;

//	ft_putnbr_fd(i, 1);
//	return (0);
//}
