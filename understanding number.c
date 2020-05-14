#include<stdio.h>
main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	switch(n)
	{
		case 0:
			printf("Yes I understand that u entered 0");
			break;
		case 1:
			printf("Yes I understand that u entered 1");
			break;
		default:
			printf("I did not understand what u entered");
	}
    return 0;
}
