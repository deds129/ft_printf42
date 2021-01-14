#include <stdio.h>
#include "includes/ft_printf.h"
int main()
{
	int ret;
	//printf(5);
	printf("%d",ft_printf("i am %c years old %с",'5','&'));
	printf("\nStandatr printf output: ");
	printf(" = %d",printf("i am %c years old %с",'5','&'));
	///ft_printf("%c = %c",'2','2');
	//printf(" | %d\n" ,ft_printf("i am %-d kek",25));
	//printf("%04d hello\n",5);
	//printf("%.4d hello",5);
	//printf("%0c", '*');

	return (0);
}