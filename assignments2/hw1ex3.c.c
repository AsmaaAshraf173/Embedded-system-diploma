
/*EX3:

Write C Program to Add Two Integers
*/
#include<stdio.h>
int n1, n2;
int main(void)
{
	printf("enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i %i",& n1,& n2);
	printf("sum= %i",n1+n2);
}
