/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:55:41 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/27 19:06:55 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	if (c == 0)
		return ((char *)s);
	s--;
	while (len)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		len--;
	}
	return (NULL);
}

//#include <stdio.h>
// int	main(void)
//{
//	char	str[] = "0123456789";
//	char	c;
//
//	c = '0';
//	printf("%s\n", str);
//	printf("search:%c\n", c);
//	printf("%s\n", strrchr(str, (int)c));
//	return (0);
//}
