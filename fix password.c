int main(){
	char user[10],pass[10];
	printf("enter the user id :");
	gets(user);
	printf("enter the password :");
	gets(pass);
	if(strcmp(user,"umesh")==0 && strcmp(pass,"pal")==0)
		printf("succesfull password enterd");
	else printf("something went wrong !,please ! try again...............");
		
}
