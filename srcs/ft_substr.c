/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:27:52 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:26:14 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*ans;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	else if (s_len - start < len)
		len = s_len - start;
	ans = (char *)malloc(sizeof(char) * len + 1);
	if (ans == NULL)
		return (NULL);
	if (len == 0 || s_len < start)
		ft_strlcpy(ans, s, 1);
	else
		ft_strlcpy(ans, s + start, len + 1);
	return (ans);
}

// int main(void)
//{
//	char str[] = "0123456789abcde";
//	char *ans;
//	unsigned int start;
//	size_t len;
//
//	start = 5;
//	len = 3;
//	ans = ft_substr(str,start, len);
//	printf("%s\n", str);
//	printf("%s\n", ans);
//	free(ans);
//	return (0);
//}
