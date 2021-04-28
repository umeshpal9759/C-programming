//#include<stdio.h>
main()
{
	
	int n,a,b,c,org,rev;
	scanf("%d",&n);
	org=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	rev=a*3+b*3+c*3;
	printf("%d",rev);
	org==rev? printf("pallinodroms"):printf("not pallinodroms");
}
