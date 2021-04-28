#include<stdio.h>
int main(){
	int year;char chh;
	
	while(1){
		printf("enter the year :");
		scanf("%d",&year);
		if((year%4==0&&year%100!=0)||(year%400==0))
			printf("leap year");
		else 
			printf("not leap year");
		printf("\nif you want more cheque : \nthen choose y/n ???");
//		fflush(stdin);
//		chh=tolower(getchar());
//        scanf("%c ",&chh);
//		if (chh=='n');
//			break;
		
			
		
	return 0;
}
}
