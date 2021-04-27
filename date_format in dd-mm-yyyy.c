//WAP to input the date in any of the formats 24:12:2020, 24/12/2020, 24-12-2020,
//24#12#2020 etc and show the date in dd-mmm-yyyy format e.g. 24-Dec-2020
//(additional if or switch)
#include<stdio.h>
int main()
{
	int d,m,y;
    scanf("%2d%*c%2d%*c%4d",&d,&m,&y);
    printf("%d-",d);
    switch (m){case(1):printf("jan");break;
	
	case(2):printf("feb");break;
	case(3):printf("mar");break;
	case(4):printf("apr");break;
	case(5):printf("may");break;
	case(6):printf("june");break;
	case(7):printf("july");break;
	case(8):printf("aug");break;
	case(9):printf("sep");break;
	case(10):printf("oct");break;
	case(11):printf("nov");break;
	case(12):printf("dec");break;
	}
	printf("-%d",y);
    
    
}

