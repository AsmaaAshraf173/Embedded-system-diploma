/*homework 3
 * ex5
 *find the location of a number in matrix
 */
#include<stdio.h>
#include<string.h>
float a[10];
int n1,i,j,k;
int main(){
	printf("enter the number of elements\n");
	fflush(stdin);fflush(stdout);
	scanf("%i ",&n1);
	if(n1<0||n1>10){
		printf("the number is invalid");
	}
	for(i=0;i<n1;i++){
		a[i]=(i+1)*11;
		printf("%.1f\t",a[i]);
	}
	printf("\n");
	printf("enter the element to be searched\n");
	fflush(stdin);fflush(stdout);
	scanf("%i",&j);
	for(i=0;i<n1;i++){
		if(j==a[i]){
			printf("the location of the number is %i\t",i+1);
		}
	}
}


