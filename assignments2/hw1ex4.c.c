
/*EX4:

Write C Program to Multiply two Floating Point Numbers
*/
#include<stdio.h>
float n1, n2;
int main(void)
{
	printf("enter two float numbers: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",& n1,& n2);
	printf("multiplication= %f",n1*n2);
}
