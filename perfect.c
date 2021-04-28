#include<Stdio.h>
main(){
	int i,n,k=0;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		if(n%i==0){
		
		k=k+i;}
	}
	if(k==n) {
	printf("perfect ");}
	else {
	printf("not perfect ");
}}
