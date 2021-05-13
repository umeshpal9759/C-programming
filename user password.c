#include<stdio.h>
int main(){
	char id[100],pass[100],ch;
	int i=0;
	printf("Enter the user id :");
	scanf("%[^\n]%*c",&id);
	printf("Enter the password :");
	while(i<50){
		ch=getch();
		if(ch=='\r') break;
		pass[i]=ch;
		putchar('*');
	i++;
	}pass[i]='\0';
	if(strcmp(id,"umesh")==0 && strcmp(pass,"pal")==0)
		printf("\nsuccesfull password enterd");
	else printf("\nsomething went wrong !,please ! try again...............");
}
