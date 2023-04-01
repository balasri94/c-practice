#include<stdio.h>
void main()
{
	int i,j,k,l=1;
	for(i=1;i<=4;i++,l++)
	{
		for(j=1;j<=4-i;j++)
			printf(" ");
			for(k=1;k<=l;k++)
				printf("%d ",l);
				printf("\n");
	}
}
