#include<stdio.h>
#include<conio.h>
main()
{
	int a=12,b=4;
	float c=1234.5678;
	char name[]="phennapha shijanlan";
	printf("value of a = %d \n",a);
	printf("value of b = %d \n",b);
	printf("value of c = %f, %e \n",c,c);
	printf("value of c = %.2f, %.9e \n",c,c);
	printf("value of name = %s, %.3s, %.9s",name,name);
	getche ();
	return 0;
}
