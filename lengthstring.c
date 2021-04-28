#include<Stdio.h>
#include<string.h>
int len(char *st){
	int l;
	l=strlen(st);
	return l;
}
int main(){
	char st[42],re;
	printf("enter the string : ");
	gets(st);
	re=len(st);
	printf("%d",re);
	return 0;
	
}
