int main(){
	char st[100],temp[100];int i=0;
	gets(st);
	strcpy(temp,st);
	printf("%d\n",strlen(st));
	printf("%s\n",strrev(st));
	printf("%s\n",strlwr(temp));
	printf("%s\n",strupr(temp));
}
