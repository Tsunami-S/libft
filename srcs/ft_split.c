/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:39:27 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:11:03 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ss_count(char const *str, char c)
{
	int	count;

	count = 1;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

void	*all_free(char **ans)
{
	char	**tmp;
	char	*to_free;

	tmp = ans;
	while (*tmp)
	{
		to_free = *tmp;
		tmp++;
		free(to_free);
	}
	free(ans);
	return (NULL);
}

char	*ft_strdup_c(char const *s, int len)
{
	char	*ans;
	char	*tmp;

	ans = (char *)malloc(sizeof(char) * len + 1);
	if (ans == NULL)
		return (NULL);
	tmp = ans;
	while (len)
	{
		*tmp = *s;
		tmp++;
		s++;
		len--;
	}
	*tmp = '\0';
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	char	**tmp;
	int		tmp_len;

	ans = (char **)malloc(sizeof(char *) * ss_count(s, c));
	if (ans == NULL)
		return (NULL);
	tmp = ans;
	while (*s)
	{
		while (*s == c)
			s++;
		tmp_len = 0;
		while (*(s + tmp_len) && *(s + tmp_len) != c)
			tmp_len++;
		if (tmp_len == 0)
			break ;
		*tmp = ft_strdup_c(s, tmp_len);
		if (*tmp == NULL)
			return (all_free(ans));
		s += tmp_len;
		tmp++;
	}
	*tmp = NULL;
	return (ans);
}

// int	main(void)
//{
//	char	*str;
//	char	c;
//	char	**ans;
//	char	**tmp;
//
//	str = "abc  defd   adsfnk   asdl alsk  ";
////	str = "";
//	c = ' ';
//	ans = ft_split(str, c);
//	if(*ans == NULL)
//		printf("NULL\n");
//	tmp = ans;
//	while (*ans)
//	{
//		if(*ans == NULL)
//			printf("NULL\n");
//		else
//			printf("%s\n", *ans);
//		ans++;
//	}
//	all_free(tmp);
//	return (0);
//}
