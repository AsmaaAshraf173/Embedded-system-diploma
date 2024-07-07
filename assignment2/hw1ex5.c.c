
/*EX5:

Write C Program to Find ASCII Value of a Character
*/
#include<stdio.h>
char C;
int main(void)
{
	printf("enter a character: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",& C);
	printf("ASCCI IS:%i",C);
	return 0;
}
