#include<stdio.h>
#include<process.h>
#define N 3
void line(){
	int i;
	for(i=0;i<80;i++)
		printf("_");
	printf("\n");
}
typedef struct{
	int bookno;float price;
	char title[50],author[50];
}book;
main(){
	book b[N];
	int i;float sumprice=0.0;
	for(i=0;i<N;i++){
		printf(" enter the data #%d\n",i+1);
		printf("\nEnter the book number :" );scanf("%d",&b[i].bookno);
		printf("\nEnter the title : ");scanf(" %[^\n]",&b[i].title);
		printf("\nEnter the author : ");scanf(" %[^\n]",&b[i].author);
		printf("\nEnter the price : ");scanf(" %f",&b[i].price);}
	system("cls");
	printf("%10s %-10s %-15.15s %-20.20s %-20.20s\n","S NO","Book No","Title","author","Price");
	line();
	for(i=0;i<N;i++){
		printf("%10d %-10.1d %-15.15s %-20.20s %-20.2f ",i,b[i].bookno,b[i].title,b[i].author,b[i].price);
		sumprice=sumprice+b[i].price;}
//	}
	line();
	printf("%39s %30.2f","total cost-->",sumprice);
	line();


}
