#include<stdio.h>
void main()
{
	int num1,num2,op;
	printf("enter the num1 value..\n");
	scanf("%d",&num1);
	printf("enter the num2 value...\n");
	scanf("%d",&num2);
	printf(" 1.add 2.sub 3.mult 4.divi..\n");
	printf("enter the option..\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:printf("addition of two number is....%d\n",num1+num2);
		       break;
		 case 2:printf(" sub of two num is...%d\n",num1-num2);
			break;
		case 3:printf("multiply of two num is...%d\n",num1*num2);
		       break;
		case 4:printf("divide 0f two num is...%d\n",num1/num2);
		       break;
		default:printf("invalid option..\n");

	}
}
