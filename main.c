#include <stdio.h>
#include "includes/ft_printf.h"
int main()
{
	int ret;

						/*char*/
	//printf("%d",ft_printf("i am %c years old",'5'));
	//printf("\nStandatr printf output: ");
	//printf(" = %d",printf("i am %c years old",'5'));

					/*string*/
	 //ret = printf("%20.5s","Hello world"); printf("$ return: %d",ret);
	 //printf("\n");
	// ret = printf("%20s","Hello world"); printf("$ return: %d",ret);

	//ret = ft_printf("%20.5s","Hello world"); printf("$ return: %d",ret);
	//printf("\n");
	//ret = ft_printf("%20s","Hello world"); printf("$ return: %d",ret);

	/*percent*/

	printf("original printf\n");
	ret = printf("%%"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%3%"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-2.3%"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%02.3%"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%0*.*%",4,3); printf("$ return: %d",ret);


	printf("\n\nmy printf\n");
	ret = printf("%%"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%3%"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-2.3%"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%02.3%"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%0*.*%",4,3); printf("$ return: %d",ret);


	//ret = ft_printf("%20.5s","Hello world"); printf("$ return: %d",ret);
	//printf("\n");
	//ret = ft_printf("%20s","Hello world"); printf("$ return: %d",ret);

	//printf(" | %d\n" ,ft_printf("i am %-d kek",25));
	//printf("%04d hello\n",5);
	//printf("%.4d hello",5);
	//printf("%0c", '*');

	return (0);
}