/*homework 3
 * ex5
 *find the location of a number in matrix
 */
#include<stdio.h>
#include<string.h>
char a[1000],b;
int i,n;
int main(){
	printf("enter a string \n");
	fflush(stdin);fflush(stdout);
	gets(a);
	printf("enter a character to find frequency\n");
	fflush(stdin);fflush(stdout);
	scanf("%s",&b);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b){
			n++;
		}
	}
	printf("the frequency= %i\n",n);
}



