/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:32:49 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:27:18 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ans;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ans = (char *)malloc(sizeof(char) * s1_len + s2_len + 1);
	if (ans == NULL)
		return (NULL);
	ft_strlcpy(ans, s1, s1_len + 1);
	ft_strlcat(ans, s2, s1_len + s2_len + 1);
	return (ans);
}

// int	main(void)
//{
//	char	s1[] = "0123456789";
//	char	s2[] = "abcde";
//	char *ans = ft_strjoin(s1, s2);
//
//	printf("s1 : %s\n", s1);
//	printf("s2 : %s\n", s2);
//	printf("ans: %s\n", ans);
//	free(ans);
//	return (0);
//}
