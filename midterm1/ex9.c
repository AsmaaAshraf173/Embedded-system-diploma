/*
 *midterm ex8
 * reverse of a string
 */
#include <stdio.h>
#include <string.h>
void fun(char string[],int size)
{
	char firstWord[20], secondWord[20], reversedstring[20];
	int i, j, spaceindex;
	for(i=0;i<size;i++)
	{
		if (string[i]==' ')
			spaceindex = i;
	}
	for(i=0;i<spaceindex;i++)
	{
		if(string[i]!=' ')
			firstWord[i]=string[i];
		else
			spaceindex=i;
	}
	firstWord[i]='\0';
	for(i=spaceindex+1,j=0;i<size;i++,j++)
	{
		if(string[i]!= '\0')
			secondWord[j]=string[i];
	}
	secondWord[j]='\0';
	strcpy(reversedstring,secondWord);
	strcat(reversedstring," ");
	strcat(reversedstring,firstWord);
	printf("The string after reverse is:\n%s",reversedstring);
}
int main()
{
	char str[100];
	int len;
	printf("Please enter the string: ");
	fflush(stdout); fflush(stdin);
	gets(str);
	len = strlen(str);
	fun(str,len);
	return 0;
}
