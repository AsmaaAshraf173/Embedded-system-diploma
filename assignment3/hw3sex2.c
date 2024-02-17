/*homework 3
string home work
 * ex2
 *find the  frequency of a character
 */
#include<stdio.h>
#include<string.h>
char a[1000];
int i,n;
int main(){
	printf("enter a string \n");
	fflush(stdin);fflush(stdout);
	gets(a);
	for(i=0;a[i]!='\0';i++){
		n++;
	}
	printf("the length= %i\n",n);
}



