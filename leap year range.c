#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter the two year :");
	scanf("%d %d",&a,&b);
	if(a>b){
		a=(a+b)-(b=a);
	}
	for(i=a;i<=b;i++){
		if(i%4==0 && i%100!=0 || i%400==0){
			printf("%d ",i);
		}
	}
	
}
