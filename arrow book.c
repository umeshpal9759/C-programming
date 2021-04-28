#include<Stdio.h>
#include<malloc.h>
typedef struct{
	int bookno;float price;
	char title[12],author[12];
	
}book;
int main(){
	book *b=(book *)malloc(sizeof(book));
	printf("Enter the book no : ");scanf("%i",&b->bookno);
	printf("Enter the title : ");scanf(" %[^\n]",&b->title);
	printf("Enter the author :");scanf(" %[^\n]",&b->author);
	printf("Enter the price : ");scanf("%f",&b->price);
	printf("\n\n\n %d %s %s %.2f",b->bookno,b->title,b->author,b->price);
	return 0;
}
