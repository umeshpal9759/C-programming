#include<stdio.h>
#include<math.h>
main()
{
	float p,r,t,a,ci;
	scanf("%f%f%f",&p,&r,&t);
	a=p*pow((1+(r/100)),t);
	ci=a-p;
	printf("ci is %f",ci);
}
