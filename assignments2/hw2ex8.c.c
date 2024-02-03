/*ex7
 * finding the factorial of a number */



#include <stdio.h>
float a,b,s;
char c;
int main()
{
	printf("enter the two numbers and operand:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %c",& a,&b ,&c);
	if(c=='+')
	{
		s=a+b;
		printf("a+b= %.2f",s);
	}
	else if(c=='-')
		{
			s=a-b;
			printf("a-b= %.2f",s);
		}
	else if(c=='*')
			{
				s=a*b;
				printf("a*b= %.2f",s);
			}
	else if(c=='/')
			{
				s=a/b;
				printf("a/b= %.2f",s);
			}
	return 0;
}
