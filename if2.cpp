#include<stdio.h>
#include<conio.h>
main()
{
	int number = 0;
	printf("number :");
	scanf("%d", &number);
	if((number %2)==0){
		printf("%d is ever number\n", number);
	}
	else{
		printf("%d is old number\n", number);
    }
    return 0;
	}
	
