/*ex6
finding the sum of n numbers */



#include <stdio.h>
int n,i,j;
int main()
{
	printf("enter the number:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",& n);
	for(i=1;i<=n;i++){
		j=j+i;
	}
	printf("the sum of numbers=%i",j);
	return 0;
}
