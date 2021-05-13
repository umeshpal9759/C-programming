#include<Stdio.h>
int main(){
	char st[10],pass[6],ch;
	int i=0;
	printf("Enter user id :");
	scanf(" %[^\n]",&st);
	printf("Enter password :");
	while(i<5){
		ch=getch();
		if(ch=='\r') break;
		pass[i]=ch;
		putchar('*');
	i++;
}pass[i]='\0';
 if (strlen(pass)&&(strlen(st))){
 	printf("\npassword create suscesfully ");
 	printf("%s",pass);
 }
	else
	printf("\nplease input password ");
}
