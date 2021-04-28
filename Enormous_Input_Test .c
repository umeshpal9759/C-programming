#include<Stdio.h>
int main(){
	int a,k,s=0;
	scanf("%d %d",&a,&k);
	while(a--){
		int n;
		scanf("%d",&n);
		if(n%k==0){
			s++;
			
		}
		
	}printf("%d",s);
}
