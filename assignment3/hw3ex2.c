/*homework 3
 * ex2
 * average of numbers by using array
 */
#include<stdio.h>
#include<string.h>
float a[100];
int n,i;
float sum,average;
int main(){
	printf("enter how many number you will enter\n");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	if(n<0||n>100){
		printf("this is invalid number\n");
	}
	for(i=0;i<n;i++){
		printf("enter number %i\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("average =%.2f\n",average);
	return 0;
}


