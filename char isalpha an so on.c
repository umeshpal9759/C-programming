#include<stdio.h>
//#include<ctype.h>
int main(){
	char ch;
	printf("Enter the character :");
	ch=getchar();
	if(isalpha(ch)){
		if(isupper(ch))
			printf("character is upper");
		else if(islower(ch))
			printf("character is lower");
	}
	else if(isdigit(ch))
		printf("character is digit ");
	else
		printf("it is special character");
}
