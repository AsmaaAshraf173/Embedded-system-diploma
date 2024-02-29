/*home work 4

 * ex2:factorial of a number using function
 */
#include<stdio.h>
int n;
int factorial();
int main()
{
	printf("enter a number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%i ",&n);
	printf("the power of %i is %i",n,factorial());
}
int factorial()
{
	int p;
	p=n*n;
	return p;
}

