/*homework5
 * ex 1
 * c program to store information (name,roll,marks)by using data structure
 */
#include<stdio.h>
struct sinformation{
	char name[50];
	int roll;
	float marks;
};
int main(){
	struct sinformation a;
	printf("enter your information\n");
	printf("enter the name:\n");
	fflush(stdin);fflush(stdout);
	scanf("%s",& a.name);
	printf("enter the roll:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",& a.roll);
	printf("enter the marks:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",& a.marks);
	printf("name: %s\n", a.name);
	printf("roll: %d\n",a.roll);
	printf("marks: %.2f\n",a.marks);
	return 0;
}

