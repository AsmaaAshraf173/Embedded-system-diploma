/*homework 3
 * ex1
 * sum of two matrix of order 2*2
 */
#include<stdio.h>
#include<string.h>
float a[2][2];
float b[2][2];
float c[2][2];
int i,j;
int main()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter number %i %i for matrix a\n",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",& a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter number %i %i for matrix b\n",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",& b[i][j]);
		}
	}
	printf("sum = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%.2f\t",c[i][j]);
			if(j==1){
				printf("\n");
			}
		}
	}
	return 0;
}
