/*homework5
 * ex 3
 * c program to find sum of two complex numbers
 */
#include<stdio.h>
int i;
struct sstudents{
	char name[50];
	float marks;
};
int main(){
	struct sstudents a[5];
	for(i=1;i<=5;i++){
		printf("for roll number %i\n",i);
		printf("enter name:\n");
		fflush(stdin);fflush(stdout);
		scanf("%s",& a[i].name);
		printf("enter marks:\n");
		fflush(stdin);fflush(stdout);
		scanf("%f",& a[i].marks);
	}
	for(i=1;i<=5;i++){
		printf("information for roll number %i\n",i);
		printf("name:%s\n",a[i].name);
		printf("marks:%.2f\n",a[i].marks);
	}
	return 0;
}

