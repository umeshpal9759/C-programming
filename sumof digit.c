#include<Stdio.h>
int main(){
	int n,s=0,a;
	scanf("%d",&n);
	while(n>0){
		
		s=s+n%10;
		n=n/10;
	}printf("%d",s);
}
