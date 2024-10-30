/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:38:36 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/26 18:05:10 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	c;
//
//	c = 'B';
//	printf("Before: %c\n", c);
//	printf("After : %c\n", ft_tolower(c));
//	return (0);
//}
