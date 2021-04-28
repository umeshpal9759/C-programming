#include<stdio.h>
main()
{
	int a[10],i,s=0,n;
	printf("enter array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{    
	    printf("enter element %d: ",i);
		scanf(" %d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("%d",s/n);
}
