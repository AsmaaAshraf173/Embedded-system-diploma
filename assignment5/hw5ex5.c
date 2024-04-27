/*homework5
 * ex5
 * c program to find area of a circle
 */
#include<stdio.h>
float r,area;
float pi=3.14;
int main(){
	printf("enter the radius:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",& r);
	area=pi*r*r;
	printf("area= %.2f",area);
	return 0;
}

