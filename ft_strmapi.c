/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:31:42 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:27:23 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*_s;
	unsigned int	i;
	unsigned int	len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	_s = (char *)malloc(sizeof(char) * len + 1);
	if (_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		_s[i] = f(i, s[i]);
		i++;
	}
	_s[i] = '\0';
	return (_s);
}

// char	change_char(unsigned int i, char c)
//{
//	char	ans;
//
//	(void)i;
//	ans = c + 1;
//	return (ans);
//}
//
// int	main(void)
//{
//	char	str[] = "abcde";
//	char	*ans;
//
//	ans = ft_strmapi(str, change_char);
//	printf("str: %s\n", str);
//	printf("ans: %s\n", ans);
//	free(ans);
//	return (0);
//}
