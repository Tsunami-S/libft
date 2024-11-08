/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:22:23 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/07 22:07:28 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ans;

	ans = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ans)
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
