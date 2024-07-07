#include<stdio.h>
int main(){
	int arr[15];
	int* p;
	int i,j;
	printf("how many numbers you enter:\n");
	fflush(stdin);fflush(stdout);
	scanf("%i",&i);
	p=&arr[i-1];
	for(j=1;j<=i;j++){
		printf("enter element%i ",j);
		fflush(stdin);fflush(stdout);
		scanf("%i",&arr[j-1]);
	}
	for(j=i;j>0;j--){
		printf("element%i %i\n",j,*p--);
	}
	return 0;
}
