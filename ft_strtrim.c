/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:38 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:27:25 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		len1;
	int		len2;
	int		total_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len1 = 0;
	while (s1[len1] && ft_strchr(set, s1[len1]))
		len1++;
	len2 = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[len2]))
		len2--;
	if (len2 - len1 + 1 < 0)
		total_len = 0;
	else
		total_len = len2 - len1 + 1;
	ans = (char *)malloc(sizeof(char) * total_len + 1);
	if (ans == NULL)
		return (NULL);
	ft_strlcpy(ans, &s1[len1], total_len + 1);
	return (ans);
}

// int	main(void)
//{
//	char	s1[] = "    aaaaa0123456789aaabbbaaaaa";
//	char	set[] = " a";
//	char *ans = ft_strtrim(s1, set);
//
//	printf("s1 : %s\n", s1);
//	printf("ans: %s\n", ans);
//	free(ans);
//	return (0);
//}
