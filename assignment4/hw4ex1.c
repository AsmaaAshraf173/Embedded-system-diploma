/*home work 4
 * ex1:prime numbers using function
 */
#include<stdio.h>
int i,n1,n2;
int prime();
int main()
{
	int p;
	printf("enter two numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%i %i",&n1,&n2);
	printf("the prime numbers are:\n");
	for(i=n1+1;i<n2;i++)
	{
		p=prime();
		if(p==0)
		{
			printf("%i\n",i);
		}
	}
	return 0;
}
int prime()
{
	int j,f=0;
	for(j=2;j<=(n1/2);j++)
	{
		if(i%j==0)
		{
			f=1;
			break;
		}
	}

	return f;
}

