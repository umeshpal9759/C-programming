#include<stdio.h>
int main(){
	int a;
	double g;
	scanf("%d",&a);
	g=a>=30000? a*.3: a>=20000? a*.2 :a*.1;
	printf("%.2f",g);
}
