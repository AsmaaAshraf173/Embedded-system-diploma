#include<stdio.h>
int main(){
	int alph,i;
	int* p=&alph;
	printf("alphabets are:\n");
	for(i=0;i<27;i++){
		*p='A'+i;
		printf(" %c",alph);
	}
	return 0;
}
