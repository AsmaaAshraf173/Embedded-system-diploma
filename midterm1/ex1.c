/*
 *midterm ex1
 * the sum of the digits  of a number
 */
#include <stdio.h>
int fun(int n);
int main()
{
	int n;
	printf("enter a number\n");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	printf("%hu",fun(n));
	return 0;
}
int fun(int n)
{
	static unsigned int j=0;
	int i;
	if(n!=0)
	{
		i=n%10;
		j+=i;
		fun(n/10);
	}
	else
		return 0;
	return j;
}
