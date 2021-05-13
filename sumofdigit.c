#include<Stdio.h>
int main(){
	int n,s=0,a;
	scanf("%d",&n);
	while(n>0){
		a=n%10;
		s+=a;
		n=n/10;
	}printf("%d",s);
}
