/*ex2
check the alphabet is vowel or consonant */
#include <stdio.h>
char a;
int main()
{
	printf("Enter a character : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u'||a=='A'||a=='E'||a=='O'||a=='I'||a=='U')
	{
   	printf("%c is vowel",a);
	}
	else
		printf("%c is consonant",a);
	return 0;
}
