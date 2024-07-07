/*ex4
check the number is positive or negative */



#include <stdio.h>
float a;
int main()
{
	printf("Enter a number: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f ",& a);
	if(a>0)
	{
		printf("%.2f is positive",a);
	}
	else if(a==0)
	{
		printf("%f is zero",a);
	}
	else{
		printf("%.2f is negative",a);
		return 0;
	}
}
