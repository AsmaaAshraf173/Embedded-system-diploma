/*
 *midterm ex5
 * the number of ones in the binary of a number
 */
#include <stdio.h>

int fun(int num)
{
	int i;
	int count = 0;
	for(i=0;i<=31;i++)
	{
		if(num&(1<<i))
			count++;
	}
	return count;
}

int main()
{
	int n;
	printf("enter the number:\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("The number of ones in the binary representation "
			"of %d is\n %d",n,fun(n));
}
