#include<stdio.h>
void main()
{
	int op;
	printf("enter option\n");
	scanf("%d",&op);

	switch(op)
	{
		case 1: printf("hi..\n");
			break;
		case 2:printf("hello..\n");
		       break;
		case 3:printf("world..\n");
		       break;
		default:printf("default..bye..\n");
	}
	printf("out of switch case\n");
}
