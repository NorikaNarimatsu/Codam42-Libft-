/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:53:03 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/08 18:31:22 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) & (c <= 126))
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('S'));
	printf("%d\n",ft_isprint(127));
    printf("%d\n",ft_isprint(0));    // 0 is an ASCII character
	return (0);
}
*/
