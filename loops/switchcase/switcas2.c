#include<stdio.h>
void main()
{
	int op;
	printf("enter option\n");
	scanf("%d",&op);

	switch(op)
	{
		default:printf("default..\n");// default put into any where in switch loop(but be mind in 'break')
			break;
		case 1: printf("hi..\n");
			break;
		case 2:printf("hello..\n");
		       break;
		case 3:printf("world..\n");
		       break;
	}
	printf("out of switch case\n");
}
