#include<stdio.h>
int lucky(int n){
	int a,s=0;
	while(n>0){
	 
		a=n%10;
		if(a==4){
			s++;
		}
		n=n/10;
	}return s;
}
int main(){
	int a,n,i,re;
	scanf("%d",&a);
	for(i=0;i<a;i++){
	
		scanf("%d",&n);
		re=lucky(n);
		printf("%d\n",re);
	}
}
