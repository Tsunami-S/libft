/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:22:23 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:23:07 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		count;
	int		i;
	char	*ans;

	count = ft_strlen(s);
	ans = (char *)malloc(sizeof(char) * count + 1);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ans[i] = s[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

// int main(void)
//{
//	char src[] = "abcde";
//	char *s1;
//	char *s2;
//
//	s1 = strdup(src);
//	s2 = ft_strdup(src);
//	printf("src: %s\n",src);
//	printf("strdup   : %s\n", s1);
//	printf("ft_strdup: %s\n", s2);
//	free(s1);
//	free(s2);
//	return (0);
//}
