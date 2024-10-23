#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ans;

	i = 0;
	ans = (unsigned char*)s;
	while(i < n)
	{
		ans[i] = '\0';
		i++;
	}
}


#include <string.h>
#include <stdio.h>
int main(void)
{
	char str1[] = "abcde";
	char str2[] = "abcde";

	printf("bzero   :%s ->", str1);
	bzero(str1, 2);
	printf("%s\n", str1);
	printf("%s\n", &str1[2]);
	printf("ft_bzero:%s ->", str2);
	ft_bzero(str2, 2);
	printf("%s\n", str2);
	printf("%s\n", &str2[2]);
	return 0;
}
