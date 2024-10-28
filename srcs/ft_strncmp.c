/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:16:02 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/27 19:16:23 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		n--;
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i] || n == 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
//{
//	char	s1[] = "axb";
//	char	s2[] = "abca";
//	size_t	n;
//
//	n = 4;
//	printf("s1: %s\n", s1);
//	printf("s2: %s\n", s2);
//	printf("strncmp   : %d\n", strncmp(s1, s2, n));
//	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//	return (0);
//}
