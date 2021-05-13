int main(){
	char ch[100];
	gets(ch);
	int i=0;
	while(ch[i]){
		if(isupper(ch[i]))
			putchar(tolower(ch[i]));
		else if(islower(ch[i]))
			putchar(toupper(ch[i]));
		else
			putchar(ch[i]);
	i++;		
	}
}
