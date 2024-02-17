/*homework 3
string home work
 * ex3
 *find the reverse of the string
 */
#include<stdio.h>
#include<string.h>
char a[1000],b[1000];
int i,j,n;
int main(){
	printf("enter a string \n");
	fflush(stdin);fflush(stdout);
	gets(a);
	n=strlen(a)-1;
	for(i=n;i>=0;i--){
		b[j]=a[i];
		j++;
	}
	printf("reverse string %s\n",b);
	return 0;
}



