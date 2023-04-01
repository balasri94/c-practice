#include<stdio.h>
void main()
{
	int num=0,i,sum=0;
	//printf("give upto perfect number u want \n");
	//scanf("%d",&rang);

abc:
	//if(num<=rang)

	for(i=1;i<num;i++)
	{
		if (num%i==0)
			sum=sum+i;
	}
	if(num==sum)
		printf("%d is perfect number\n",num);
	else
		printf("not a perfect number\n");
	num++;
	goto abc;
}
