/*
 *midterm ex6
 *finding unique nmbers in an array
 */
#include <stdio.h>
void non_repeated(int arr[],int length);
int main()
{
	int n,i, arr[100];
	printf("Enter the length of array: ");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Array is: ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	non_repeated(arr,n);
	return 0;
}
void non_repeated(int arr[],int length){
	int i,j=0;
	printf("\nNon_repeated number: ");
	for(i=0;i<length;i++,j=0)
	{	check:
		if(arr[i]==arr[j] && i !=j)
		{
			continue;
		}
		if(j == length)
		{
			printf("%d ",arr[i]);
		}
		else{
			j++;
			goto check;
		}
	}
}

