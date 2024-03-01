/*
 *midterm ex8
 *reverse of an array
 */
#include <stdio.h>
void reverse_arr(int arr[],int size)
{
	printf("Revesed Array: ");
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
int main(void)
{
	int arr[100],i,n;
	printf("Enter the size of the Array: ");
	fflush(stdin);fflush(stdout);
    scanf("%d",&n);
	printf("Before Reversing.\nArray is: ");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nAfter Reversing.\n");
	reverse_arr(arr,n);
	return 0;
}
