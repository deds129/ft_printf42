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


//
//	ret = printf("%-20.2s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%20.2s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%2.2s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%2.20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-2.20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%.20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%50s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-50s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-5.3s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-.3s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	char *a = NULL;
//	ret = printf("%.3s",a); printf("$ return: %d",ret);
//
//	printf("\n\nmy_printf\n");
//	ret = ft_printf("%-20.2s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%20.2s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%2.2s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%2.20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-2.20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%.20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%50s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-50s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-5.3s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-.s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//
//	char *a1 = NULL;
//	ret = printf("%.3s",a1); printf("$ return: %d",ret);



	printf("\n==============zero case===============\n");
	ret = printf("%010.d",0); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-10.d",0); printf("$ return: %d",ret);
	printf("\n----------------my printf-----------------------\n");
	ret = ft_printf("%010.d",0); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-10.d",0); printf("$ return: %d",ret);
	printf("\n");

	printf("\n============== !width && !dot ===============\n");
	ret = printf("%0d",-324342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-d",323232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%0d",323232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-d",-324342242); printf("$ return: %d",ret);
	printf("\n----------------my printf-----------------------\n");
	ret = ft_printf("%0d",-324342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-d",323232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%0d",323232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-d",-324342242); printf("$ return: %d",ret);
	printf("\n");

	printf("\n============== width != 0 && !dot case ===============\n");
	ret = printf("%15d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-15d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%015d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-15d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%015d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%15d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%15d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-15d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%015d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-15d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%015d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%15d",-424342242); printf("$ return: %d",ret);
	printf("\n");

	ret = printf("%5d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-5d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%05d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-5d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%05d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%5d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%5d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-5d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%05d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%-5d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%05d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = printf("%5d",-424342242); printf("$ return: %d",ret);
	printf("\n");

	printf("\n----------------my printf-----------------------\n");
	ret = ft_printf("%15d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-15d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%015d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-15d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%015d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%15d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%15d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-15d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%015d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-15d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%015d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%15d",-424342242); printf("$ return: %d",ret);
	printf("\n");

	ret =ft_printf("%5d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-5d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%05d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-5d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%05d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%5d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%5d",424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-5d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%05d",423232342); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%-5d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%05d",-424342242); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%5d",-424342242); printf("$ return: %d",ret);
	printf("\n");





	return (0);
}