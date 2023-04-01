#include<stdio.h>
void main()
{
	int i,j,k,l=5;
	for(i=1;i<=5;i++,l--)
	{
		for(j=1;j<=5-i;j++)
			printf(" ");
			for(k=5;k>=l;k--)
				printf("%d ",l);
				printf("\n");
	}
}
