/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:27:13 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:00:32 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		len;
	int		sign;

	len = count_num(n);
	ans = (char *)malloc(sizeof(char) * len + 1);
	if (ans == NULL)
		return (NULL);
	sign = 1;
	if (n < 0)
		sign = -1;
	*(ans + len) = '\0';
	len--;
	while (len >= 0)
	{
		*(ans + len) = ft_abs(n % 10) + '0';
		n /= 10;
		len--;
	}
	if (sign < 0)
		*ans = '-';
	return (ans);
}

// int main(void)
//{
//	int n1 = 0;
//	int n2 = 10;
//	int n3 = 2147483647;
//	int n4 = -2147483648;
//	char *s1 = ft_itoa(n1);
//	char *s2 = ft_itoa(n2);
//	char *s3 = ft_itoa(n3);
//	char *s4 = ft_itoa(n4);
//
//	printf("%d: %s\n", n1, s1);
//	printf("%d: %s\n", n2, s2);
//	printf("%d: %s\n", n3, s3);
//	printf("%d: %s\n", n4, s4);
//	free(s1);	
//	free(s2);	
//	free(s3);	
//	free(s4);	
//	return (0);
//}
