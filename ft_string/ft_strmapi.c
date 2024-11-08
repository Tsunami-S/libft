/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:31:42 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/07 22:12:55 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*copy_s;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	copy_s = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!copy_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy_s[i] = f(i, s[i]);
		i++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}
