#include<stdio.h>
int main(){
	int a,b,c,g;
	printf("Enter three digit :");
	scanf("%d%d%d",&a,&b,&c);
	g=a>b && a>c? a :b>c?b:c;
	printf("%d",g);
	
}
