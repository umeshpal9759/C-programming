#include<Stdio.h>
int sum(int n){
	int a,s=0,b,d=n;
	a=n%10;
	while(d>=10){
		b=d%10;
		d=d/10;
	}
	s=a+d;
	return s;
}
int main(){
	int a,n,i,re;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&n);
	re=sum(n);
	printf("%d\n",re);
	}

}
