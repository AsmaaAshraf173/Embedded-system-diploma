/*ex6
finding the sum of n numbers */



#include <stdio.h>
int n,i,j=1;
int main()
{
	printf("enter the number:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",& n);
	if(n>0){
		for(i=1;i<=n;i++){
			j=j*i;
		}
		printf("the factorial=%i",j);
	}
	else if (n<0)
	{
		printf("error!! there no factorial for negative number");
	}
	else if(n==0){
		printf(" factorial for 0 =1");
	}
	return 0;
}
