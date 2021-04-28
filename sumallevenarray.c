#include<Stdio.h>
int main(){
	int arr[5],s=0,i;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	} for(i=0;i<5;i++){
		if(arr[i]%2==0){
			{s=s+arr[i];
			}
		}
	} printf("%d",s);
	return 0;
	
}
