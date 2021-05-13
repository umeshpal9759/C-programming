#include<stdio.h>
int main(){
	int n,c=1;
	scanf("%d",&n);
	while(c<=10){
		printf("\t\t%d x %d = %d\n",n,c,c*n);
		c++;
	}
}
