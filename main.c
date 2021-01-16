#include <stdio.h>
#include "includes/ft_printf.h"
int main()
{
	int ret;

						/*char*/
//	printf("original printf\n");
//	ret = printf("%4c",'*'); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%*c",'*',-2); printf("$ return: %d",ret);
//
//	printf("\nmyprintf\n");
//	ret = ft_printf("%4c",'*'); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%*c",'*',-2); printf("$ return: %d",ret);


	/*string*/
	 //ret = printf("%20.5s","Hello world"); printf("$ return: %d",ret);
	 //printf("\n");
	// ret = printf("%20s","Hello world"); printf("$ return: %d",ret);

	//ret = ft_printf("%20.5s","Hello world"); printf("$ return: %d",ret);
	//printf("\n");
	//ret = ft_printf("%20s","Hello world"); printf("$ return: %d",ret);

	/*percent*/

//	printf("original printf\n");
//	ret = printf("%%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%3%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-2.3%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%02.3%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%0*.*%",-4,3); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-*.*%",-4,3); printf("$ return: %d",ret);
//
//	printf("\n\nmy printf\n");
//	ret = ft_printf("%%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%3%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-2.3%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%02.3%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%0*.*%",-4,3); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-*.*%",-4,3); printf("$ return: %d",ret);



	ret = printf("%-20.2s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%20.2s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%2.2s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%2.20s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-2.20s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%.20s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%50s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-50s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-5.3s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-.3s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	char *a = NULL;
	ret = printf("%.3s",a); printf("$ return: %d",ret);

	printf("\n\nmy_printf\n");
	ret = ft_printf("%-20.2s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%20.2s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%2.2s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%2.20s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-2.20s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%.20s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%50s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-50s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-5.3s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-.3s","Hello world"); printf("$ return: %d",ret);
	printf("\n");
	char *a1 = NULL;
	ret = printf("%.3s",a1); printf("$ return: %d",ret);


	//printf(" | %d\n" ,ft_printf("i am %-d kek",25));
	//printf("%04d hello\n",5);
	//printf("%.4d hello",5);
	//printf("%0c", '*');

	return (0);
}