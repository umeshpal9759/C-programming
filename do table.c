#include<stdio.h>
int main(){
	int n,i;
	char ch;
	do{
		system("cls");
		printf("Enter the number :");
		scanf("%d",&n);
		for(i=1;i<=10;i++){
			printf("%d X %d = %d\n",n,i,n*i);}
		printf("If you want more check then press[y/Y] ?\n");
		ch=getche();
	}while(ch=='y'||ch=='Y');
}
