/*homework 3
 * ex3
 * transpose of a matrix
 */
#include<stdio.h>
#include<string.h>
float a[100][100],b[100][100];
int n1,n2,i,j;
int main(){
	printf("enter the number of rows and columns\n");
	fflush(stdin);fflush(stdout);
	scanf("%i %i",&n1,&n2);
	if(n1<0||n1>100||n2<0||n2>100){
		printf("those numbers are invalid");
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("enter number %i %i\n",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("matrix=\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("%.2f\t",a[i][j]);
			if(j==n2-1){
				printf("\n");
			}
		}
	}
	printf("transpose of the matrix=\n");
	for(i=0;i<n2;i++){
		for(j=0;j<n1;j++){
			b[i][j]=a[j][i];
			printf("%.2f\t",b[i][j]);
			if(j==n1-1){
				printf("\n");
			}
		}
	}
}


