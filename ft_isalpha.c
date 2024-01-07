/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:49:32 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/08 16:36:40 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'a') & (c <= 'z'))
		|| ((c >= 'A') & (c <= 'Z')))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha('a'));
	return (0);
}
*/
