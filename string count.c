#include<ctype.h>
int main(){
	char st[109];
	gets(st);
	int i=0,au=0,al=0,d=0,s=0,sp=0;
	while(st[i]){
		
		if(isupper(st[i]))
			au++;
		else if(islower(st[i]))
			al++;
		else if(isdigit(st[i]))
			d++;
		else if(isspace(st[i]))
			s++;
		else
			sp++;
	i++;
	}
	printf("alphabet is %d   , upper is  %d  and lower is  %d\n",au+al,au,al);
	printf("digit is %d  , space is %d and special character is %d",d,s,sp+s);
}
