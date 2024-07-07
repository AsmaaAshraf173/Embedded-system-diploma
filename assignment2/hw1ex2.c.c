/*
 ============================================================================
 Name        : testss.c
 Author      : asmaa ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
/Write C Program to Print a Integer Entered by a User
*/
#include <stdio.h>
int i;
int main(void)
{
	printf("enter a number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",& i);
	printf("the number you entered is: %i",i);
}
