/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:38 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/07 22:22:34 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		len1;
	int		len2;
	int		total_len;

	if (!s1 || !set)
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
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, &s1[len1], total_len + 1);
	return (ans);
}
