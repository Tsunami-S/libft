//#include "libft.h"
//
//void bzero(void *s, size_t n)
//{



#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "abcde";

	printf("%s\n", str);
	bzero(str, 2);
	printf("%s\n", str);
	return 0;
}
