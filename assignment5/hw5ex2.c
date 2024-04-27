/*homework5
 * ex 2
 * c program to find sum of two distances
 */
#include<stdio.h>
struct sdistance{
	float feet1;
	float feet2;
	float inch1;
	float inch2;
	float sum1;
	float sum2;
};
int main(){
	struct sdistance a;
	printf("enter distance 1\n");
	printf("in feet:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",& a.feet1);
	printf("in inch:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",& a.inch1);
	printf("enter distance 2\n");
	printf("in feet:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",& a.feet2);
	printf("in inch:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",& a.inch2);
	a.sum1=a.feet1+a.feet2;
	a.sum2=a.inch1+a.inch2;
	if(a.sum2>12){
		a.sum1++;
		a.sum2=a.sum2-12;
	}
	printf("sum= %.1ffeet %.2finch",a.sum1,a.sum2);
	return 0;
}

