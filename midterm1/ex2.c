#include <stdio.h>
int num;
int myfun(float num)
{
	return (int)num+1;
}

float squareRoot(int number)
{
	float i, sqrroot;
	for(i=(number/2);i>=0;i--)
	{
		if((i*i)==number)
		{
			sqrroot =i;
			break;
		}
		for(;i>=0;(i-=0.001))
		{
			if(myfun(i*i)==number)
			{
				sqrroot =i;
				break;
			}
		}
	}
	return sqrroot;
}

int main()
{
	printf("enter the number you want to calculate its square root:\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The Square Root of %d is approximately equal to \n%0.2f ", num, squareRoot(num));
	return 0;
}
