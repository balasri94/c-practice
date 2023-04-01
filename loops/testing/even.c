#include<stdio.h>
void main()
{
	int i,a;
	printf("upto even and odd u want\n");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(i%2==0)
		printf("even num is %d\n",i);
		else
		printf("odd num is %d\n",i);
	}
}
