/*homework 3
 * ex3
 * transpose of a matrix
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
		a[i]=i+1;
		printf("%.1f\t",a[i]);
	}
	printf("\n enter the element to be inserted\n");
	fflush(stdin);fflush(stdout);
	scanf("%i",&j);
	printf("enter the location\n");
	fflush(stdin);fflush(stdout);
	scanf("%i",&k);
	for(i=0;i<n1;i++){
		if(k==i+1){
			a[i]=j;
			printf("%.1f\t",a[i]);
		}
		a[i]=i+1;
		printf("%.1f\t",a[i]);
	}
}


