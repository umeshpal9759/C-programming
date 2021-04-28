#include<stdio.h>
gcd(int num1,int num2){
	int i,g;
	for(i=1;i<num1 && i<num2;i++)
		if((num1%i==0) &&( num2%i==0))
			printf("%d\n",i);
}int main(){
	int num1,num2,re,g;
	scanf("%d%d",&num1,&num2);
	gcd(num1,num2);
	
}
