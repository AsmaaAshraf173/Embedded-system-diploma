/*midterm q10
 *The maximum number of ones between two zeros
 */
#include <stdio.h>

int maxNumberOfOnes(int num)
{
	int counter=0;
	int max=0;
	int i;
	for(i=0;i<32;i++)
	{
		if(num&(1<<i))
			{
				counter++;
				if(counter>max)
					max=counter;
			}
		else
			counter=0;

	}
	return max;
}


int main()
{
	int number;
	printf("Please enter the number you want to calculate the max no. of\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("The maximum number of ones between two zeros is \n%d",maxNumberOfOnes(number));
}
