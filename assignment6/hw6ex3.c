#include<stdio.h>
int main(){
	char string[100];
	char* p;
	p=string;
	int i,j;
	printf("enter the text:\n");
	fflush(stdin);fflush(stdout);
	scanf("%s",string);
	printf("the reverse text is:");
	for(i=0;i<100;i++){
		j=i;
		if(string[i]=='\0'){
			break;
		}
	}
	for(i=j;i>=0;i--){
		*p=string[i];
		printf(" %c",*p);
	}
	return 0;
}
