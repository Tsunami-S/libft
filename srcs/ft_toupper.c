/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:38:36 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/26 17:38:45 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	c;
//
//	c = 'b';
//	printf("Before: %c\n", c);
//	printf("After : %c\n", ft_toupper(c));
//	return (0);
//}
