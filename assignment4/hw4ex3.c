/*home work 4

 * ex3:power of a number using function
 */
#include<stdio.h>
#include <string.h>
char a[1000],b[1000];
int i,j,n;
void reverse();
int main()
{
	reverse();
}
void reverse()
{
	printf("enter a string \n");
	fflush(stdin);fflush(stdout);
	gets(a);
	n=strlen(a)-1;
	for(i=n;i>=0;i--){
		b[j]=a[i];
		j++;
	}
	printf("reverse string %s\n",b);
	}

