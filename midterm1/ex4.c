/*midterm q4
 *The reverse of a number
 */
#include <stdio.h>

void Reverse(int number)
{
	int digit;
	if (number!=0)
	{	digit = number%10;
		printf("%d",digit);
		Reverse(number/10);
	}
}

int main()
{
	int number;
	printf("Please enter the number you want to reverse\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);
	printf("The reversed number is:");
	Reverse(number);
}
