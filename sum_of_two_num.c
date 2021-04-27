#include<stdio.h>
 int add(int a,int b){
 	return a+b;
 }
int main()
{   int a,b,re;
	scanf("%d %d",&a,&b);
	re=add(a,b);
	printf("%d",re);
	return 0;
}
