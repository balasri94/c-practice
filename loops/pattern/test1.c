#include<stdio.h>
void main()
{
	int i,j,k,l=5;
	for(i=1;i<=5;i++,l--)
	{
		//for(j=1;j<i;j++)
		//	printf(" ");
			for(k=1;k<=l;k++)
				printf("%d ",l);
				printf("\n");
	}
}
