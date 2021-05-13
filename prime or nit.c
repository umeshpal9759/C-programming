#include<stdio.h>
int main(){
	int n,i,s=0;
	printf("Enter the number :");
	scanf("%d",&n);
	if(n==1){
		printf("1 is neigther prime not composit ");
	} for(i=2;i<n;i++){
		if(n%i==0){
			s=1;
			break;
		}
	}if(s){
		printf("%d is prime ",n);
	}else{
		printf("%d is not prime");
	}
		
	
}
