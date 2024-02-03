/*ex1
check the number is even or odd */



#include <stdio.h>
int a, b;
int main()
{
	printf("Enter an integer number : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&a);
	b=a%2;
	if(b==0)
	{
		printf("%i is even",a);
	}
	else
		printf("%i is odd",a);
	return 0;
}

