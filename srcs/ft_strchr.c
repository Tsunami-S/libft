/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:50:15 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/27 17:25:02 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

//#include <stdio.h>
// int	main(void)
//{
//	char	str[] = "0123456789";
//	char	c;
//
//	c = '5';
//	printf("str: %s\n", str);
//	printf("search:%c\n", c);
//	printf("strchr   : %s\n", strchr(str, (int)c));
//	printf("ft_strchr: %s\n", ft_strchr(str, (int)c));
//	return (0);
//}
