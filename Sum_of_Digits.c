#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		int t,s=0;
		scanf("%d",&t);
		while(t>0)
		{ 
		    int a;
			a=t%10;
			t=t/10;
			s=a+s;		
		}
		printf("%d\n",s);
	}
}

//3 
//12345
//31203
//2123
