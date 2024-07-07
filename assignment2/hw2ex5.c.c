/*ex5
check the input is alphabet or not */



#include <stdio.h>
char a;
int main()
{
	printf("Enter an alphabet: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c ",& a);
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		printf("%C is an alphabet",a);
	}
	else
	{
		printf("%C is not  an alphabet",a);
	}
	return 0;
}
