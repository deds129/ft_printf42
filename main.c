#include <stdio.h>
#include "includes/ft_printf.h"
int main()
{
	int ret;
	//printf("Hello, World!\n");
	printf(" | %d\n" ,ft_printf("ddd"));

	printf("%-5dhello",-7);
	return (0);
}