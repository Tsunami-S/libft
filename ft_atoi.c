/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:49:08 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:59:19 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long long	ans;
	int			sign;

	ans = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		if (sign > 0 && (ans > LONG_MAX / 10 || (ans == LONG_MAX / 10 && *nptr
					- '0' > LONG_MAX % 10)))
			return ((int)LONG_MAX);
		else if (sign < 0 && (-ans < LONG_MIN / 10 || (-ans == LONG_MIN / 10
					&& -(*nptr - '0') < LONG_MIN % 10)))
			return ((int)LONG_MIN);
		ans = ans * 10 + *nptr - '0';
		nptr++;
	}
	return ((int)ans * sign);
}

// int main(void)
//{
//	char *s1 = "9223372036854775808";
//	char *s2 = "9223372036854775807";
//	char *s3 = "9223372036854775806";
//	char *s4 = "-9223372036854775808";
//	char *s5 = "-9223372036854775809";
//	char *s6 = "2147483647";
//	char *s7 = "2147483648";
//	char *s8 = "2147483649";
//
//	printf("%s : %d | %d\n", s1, atoi(s1), ft_atoi(s1));
//	printf("%s : %d | %d\n", s2, atoi(s2), ft_atoi(s2));
//	printf("%s : %d | %d\n", s3, atoi(s3), ft_atoi(s3));
//	printf("%s : %d | %d\n", s4, atoi(s4), ft_atoi(s4));
//	printf("%s : %d | %d\n", s5, atoi(s5), ft_atoi(s5));
//	printf("%s : %d | %d\n", s6, atoi(s6), ft_atoi(s6));
//	printf("%s : %d | %d\n", s7, atoi(s7), ft_atoi(s7));
//	printf("%s : %d | %d\n", s8, atoi(s8), ft_atoi(s8));
//	printf("%ld\n", LONG_MAX);
//	printf("%ld\n", LONG_MIN);
//	printf("%d\n", (int)LONG_MAX);
//	printf("%d\n", (int)LONG_MIN);
//	return (0);
//}
