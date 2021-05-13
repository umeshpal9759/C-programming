#include<Stdio.h>
int main(){
	int a=5,b=8;
	int temp;
//	a=(a*b)/(b=a);
//	a=(a+b)-(b=a);
	a=(a^b)^(b=a);
	printf("%d %d",a,b);
}
