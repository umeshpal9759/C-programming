#include<stdio.h>
int main(){
	int x;float y;
	scanf("%d %f",&x,&y);
	if(x%5==0 && x+.50<=y )
	{
	 printf("%.2f",y-x-.50);
}
	else{
	
		printf("%.2f",y);
	}return 0;
}
