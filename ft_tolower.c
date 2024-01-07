/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:58:11 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/08 18:34:09 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("answer: %c \n", ft_tolower('m'));
	printf("answer: %c \n", tolower('m'));
	printf("answer: %c \n", ft_tolower('1'));
	printf("answer: %c \n", tolower('1'));
	printf("answer: %c \n", ft_tolower('M'));
	printf("answer: %c \n", tolower('M'));

	return (0);
}
*/
