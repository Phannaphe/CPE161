#include<stdio.h>
#include<conio.h>
main()
{
	char name[15];
	char sername[30];
	printf("Insert your name?:");
	gets(name);
	printf("Insert your sername?:");
	gets(sername);
	printf("\n\n Hello %s %s.\n",name ,sername);
	getche ();
	return 0;
}
