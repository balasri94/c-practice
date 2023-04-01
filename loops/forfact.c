#include<stdio.h>
void main()
{
	int fact=1,n;
	printf("enter the number...\n");
	scanf("%d",&n);
	for(n;n>0;n--)
		fact=fact*n;
	printf("factorial:%d\n",fact);
}
