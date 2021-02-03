#include <stdio.h>
#include "includes/ft_printf.h"
int main()
{
	//"%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d" -2147483648,
	int ret;
		printf("\n---------------------------------------------\n");
	//ret = printf("%0*d", -2147483648); printf("$ return: %d",ret);
	//printf("\n");
	ret = ft_printf("%0*d", -2147483648); printf("$ return: %d",ret);
	printf("\n");


	//printf("%5%");

	//
//	Test 647 (moul_star_2) : FAILED.
//			First line of code: {return test("%% *.5i 42 == |% *.5i|
//											 ", 4, 42);}
//	expected output : "% *.5i 42 == | 00042|
//					  "
//	your output     : "000000000 *.5i 42 == ||
//					  "
//	expected (nonprintable as hex) : "% *.5i 42 == | 00042|\x0a"
//	actual   (nonprintable as hex) : "000000000 *.5i 42 == ||\x0a"
//	ret = printf("%-7.3d", -14); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-7.3d", -14); printf("$ return: %d",ret);
//	printf("\n");
//
	printf("\n---------------------------------------------\n");
	ret = printf("%10c", 49); printf("$ return: %d",ret);
	printf("\n");
	ret = ft_printf("%10c", 49); printf("$ return: %d",ret);
	printf("\n");




//	printf("\n=======original printf   char=========\n");
//	ret = printf("%4c",'*'); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%*c",10,'-'); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%*c",5); printf("$ return: %d",ret);
//	printf("\n");
//	printf("\n-------------------------\n");
//
//
//
//	printf("\nmyprintf\n");
//	ret = ft_printf("%4c",'*'); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%*c",10,'-'); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%*c",5); printf("$ return: %d",ret);
//	printf("\n");
//	printf("\n=========================================\n");


//
//	printf("\n===================string======================\n");
//	 ret = printf("%20.5s","Hello world"); printf("$ return: %d",ret);
//	 printf("\n");
//	 ret = printf("%20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
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
//	ret = ft_printf("%20.5s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%20s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
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
//	ret = ft_printf("%-.3s","Hello world"); printf("$ return: %d",ret);
//	printf("\n");
//	char *a1 = NULL;
//	ret = ft_printf("%.3s",a1); printf("$ return: %d",ret);
//
//
//
//
//	printf("\n===================percent======================\n");
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
//	printf("\n");
//	ret = printf("%10.2%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%2.10%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-10.2%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-2.10%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%010.2%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%02.10%"); printf("$ return: %d",ret);
//
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
//	printf("\n");
//	ret = ft_printf("%10.2%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%2.10%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-10.2%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-2.10%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%010.2%"); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%02.10%"); printf("$ return: %d",ret);
//
//
//
//	printf("\n==============zero case===============\n");
//	ret = printf("%010.d",0); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-10.d",0); printf("$ return: %d",ret);
//	printf("\n----------------my printf-----------------------\n");
//	ret = ft_printf("%010.d",0); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-10.d",0); printf("$ return: %d",ret);
//	printf("\n");
//
//	printf("\n============== !width && !dot ===============\n");
//	ret = printf("%0d",-324342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-d",323232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%0d",323232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-d",-324342242); printf("$ return: %d",ret);
//	printf("\n");
//	printf("\n----------------my printf-----------------------\n");
//	ret = ft_printf("%0d",-324342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-d",323232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%0d",323232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-d",-324342242); printf("$ return: %d",ret);
//	printf("\n");
//
//	printf("\n============== width != 0 && !dot case ==rrrrr=============\n");
//	ret = printf("%15d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-15d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%015d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%015d",-424342242); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = printf("%15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%15d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-15d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%015d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-15d",-424342242); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = printf("%015d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//
//	ret = printf("%5d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-5d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%05d",423232342); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = printf("%-5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%05d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%5d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-5d",423232342); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = printf("%05d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%05d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//
//	printf("\n----------------my printf-----------------------\n");
//	ret = ft_printf("%15d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-15d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%015d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%015d",-424342242); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = ft_printf("%15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%15d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-15d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%015d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-15d",-424342242); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = ft_printf("%015d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//
//	ret = ft_printf("%5d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-5d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%05d",423232342); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = ft_printf("%-5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%05d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%5d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-5d",423232342); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = ft_printf("%05d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%05d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//
//
//	printf("\n============== width != 0 && !dot case ===============\n");
//	ret = printf("%15.20d",-24); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%15.20d",24); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-13.15d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%02.2d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-.15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%01.15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%12.15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%34.5d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-.5d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%0.5d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%-20.d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = printf("%6.d",-424342242); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = printf("%.5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//
//
//	printf("\n----------------my printf-----------------------\n");
//	ret = ft_printf("%15.20d",-24); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%15.20d",24); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-13.15d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%02.2d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-.15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%01.15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%12.15d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%34.5d",424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-.5d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%0.5d",423232342); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%-20.d",-424342242); printf("$ return: %d",ret);
//	printf("\n");
//	ret = ft_printf("%6.d",-424342242); printf("$ return: %d",ret);
//	printf("\n\n");
//	ret = ft_printf("%.5d",-424342242); printf("$ return: %d",ret);
//	printf("\n");

	return (0);
}