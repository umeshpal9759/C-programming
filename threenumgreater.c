#include<stdio.h>
gtnum(int a,int b,int c){
	if((a>b)&&(a>c)) printf("a is greater%d",a);
	else if((b>a)&&(b>c)) printf("b is greater %d",b);
	else printf("c is greater %d",c);
}int main(){
	int a,b,c;
	printf("enter three number :");
	scanf("%d%d%d",&a,&b,&c);
	gtnum(a,b,c);
}
