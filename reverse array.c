#include<stdio.h>
main()
{
	int a[43],i,b[34],n;
	printf("ENTER ARRAY SIZE :");
	scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
 }printf("reverse array : ");
    for (i=0;i<n;i++)
    {
    	printf(" \nrev array is [%d] : %d",i,b[i]);
    }
	}
