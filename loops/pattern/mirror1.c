#include<stdio.h>
void main()
{
	int i,j,k,l;
	for(i=-4;i<=4;i++)
	{
		if(i<0)
			l=-i;// -ve values also convert into positive value because same pattern followed for -ve values
		else
			l=i;
		for(j=0;j<4-l;j++)
			printf(" ");
			for(k=0;k<=l;k++)
				printf("* ");
				printf("\n");
	}
}

