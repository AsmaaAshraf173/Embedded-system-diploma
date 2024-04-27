/*homework5
 * ex 3
 * c program to find sum of two complex numbers
 */
#include<stdio.h>
struct scomplex{
	float real1;
	float real2;
	float imag1;
	float imag2;
	float sum1;
	float sum2;
};
int main(){
	struct scomplex a;
	printf("enter first complex real & imaginary respectively\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",& a.real1,&a.imag1);
	printf("enter second complex real & imaginary respectively\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",& a.real2,&a.imag2);
	a.sum1=a.real1+a.real2;
	a.sum2=a.imag1+a.imag2;
	printf("sum= %.2f+j%.2f",a.sum1,a.sum2);
	return 0;
}

