#include<stdio.h>
int main(){
	char ch;
 
	printf("enter the character :");
	ch=getchar();
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
		switch(ch){
			case 'a':case 'e':case 'u':case 'i':case 'o':case 'A':case 'E':case 'I':case 'U':case 'O':
				printf("%c is vowel ",ch);break;
			default:
				printf("%c is consonant",ch);
	}
	}else {
		printf("invalid character");
	}}
