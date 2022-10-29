#include<stdio.h>
#include<conio.h>
main()
//{
//	int a;
//	printf("enter point:");
//	scanf("%d", &a);
//	if((a<=100)&&(a>60))
//	printf("%d point + goog\n",a);
//	else if((a<60)&&(a>=40))
//	printf("%d point = pass\n",a);
//	else 
//	printf("%d point = fail\n",a);
//	getch ();
//	return 0;
//}

{
	int a;
	printf("enter point:");
	scanf("%d", &a);
	if((a<=100)&&(a>80))
	printf("%d point = A\n",a);
	else if((a<79)&&(a>=70))
	printf("%d point = B\n",a);
	else if((a<69)&&(a>=60))
	printf("%d point = C\n",a);
	else if((a<59)&&(a>=50))
	printf("%d point = D\n",a);
	else if((a<49)&&(a>=0))
	printf("%d point = F\n",a);
	getch ();
	return 0;
}
