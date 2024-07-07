#include<stdio.h>
int main(){
	int m=29;
	int* ab=&m;
	printf("address m=ox%p_value of m=%i\n",&m,m);
	printf("address ab=o%p_value of ab=%i\n",ab,*ab);
	*ab=34;
	printf("address m=ox%p_value of m=%i\n",&m,m);
	*ab=7;
	printf("address m=ox%p_value of m=%i\n",&m,m);
	return 0;
}
