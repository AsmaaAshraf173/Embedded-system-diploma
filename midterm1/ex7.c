/*
 *midterm ex7
 * the sum of 100 without using loops
 */
#include <stdio.h>

int i;
int sum;

int fun()
{
	if(i<=100)
	{	sum+=i;
		i++;
		fun();
		return sum;
	}
	return 0;
}
int main()
{
	printf("The sum of numbers from 1 to 100 equals %d ",fun());
	return 0;
}
