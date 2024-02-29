/*home work 4
 * ex1:prime numbers using function
 */
#include<stdio.h>
int i,j,n;
int factorial();
int main()
{
	printf("enter a number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%i ",&n);
	printf("the factorial of %i is %i",n,factorial());
}
int factorial()
{
	j=1;
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	return j;
}

