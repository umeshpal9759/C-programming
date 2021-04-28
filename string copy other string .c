#include<stdio.h>
#include<string.h>
main()
{
	char st[34],str[34],i;
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		str[i]=st[i];
	}
	printf("copy string is :");
	puts(str );
	return 0;
}
