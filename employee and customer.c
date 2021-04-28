#include<stdio.h>
typedef struct{   //empid, name, department and designation;
	int empid;
	char name[12],depart[12],desig[12];	
}employee;
typedef struct{  //attributes cid, name, email and mobile.
	int cusid[12],mobileno[12];
	char name[12],email[12];
}custumer;
//union  variable{
//	struct employee e;struct custumer c;
//}variable;
//employee(){
//	printf("Enter the employee id : ");scanf("%d",&e.empid);
//	printf("Enter the name of emp : ");scanf(" %[^n]",&e.name);
//	printf("Enter the department of emp : ");scanf(" %[^n]",&e.depart);
//	printf("Enter the designation of emp : ");scanf(" %[^n]",&e.desig);
//	printf("%d  %s  %s   %s",e.empid,e.name,e.depart,e.desig);
//} customer(){
//	printf("Enter the customer id : ");scanf("%d",&c.cusid));
//	printf("Enter themobile number of customer : ");scanf("%d",&c.mobileno);
//	printf("Enter the name of cust : ");scanf(" %[^\n]",&c.name);
//	printf("Enter the email ; ");scanf(" %[^\n]",&c.email);
//	printf("%d  %s   %s  %s",c.cusid,c.mobileno,c.name,c.email);
//}
int main(){
	employee e;int n; custumer c;
	printf("1.input record of employee and show that record\n");
	printf("2.input record of customer and show that record\n");
	printf("Enter the employee id : ");scanf("%d",&e.empid);
	printf("Enter the name of emp : ");scanf(" %[^\n]",&e.name);
	printf("Enter the department of emp : ");scanf(" %[^\n]",&e.depart);
	printf("Enter the designation of emp : ");scanf(" %[^\n]",&e.desig);
	printf("Enter the customer id : ");scanf("%d",&c.cusid);
	printf("Enter themobile number of customer : ");scanf("%d",&c.mobileno);
	printf("Enter the name of cust : ");scanf(" %[^\n]",&c.name);
	printf("Enter the email ; ");scanf(" %[^\n]",&c.email);
	printf("%d  %d   %s  %s\n",c.cusid,c.mobileno,c.name,c.email);
	printf("%d  %s  %s   %s",e.empid,e.name,e.depart,e.desig);
//	printf("\nEnter choice : ");
//	scanf("%d",&n);
//	customer();
//	empolyee();
	
	
	
}
