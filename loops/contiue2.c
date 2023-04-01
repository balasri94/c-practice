#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("hi...\n");
		if(i<3)
		continue;
		printf("hello..\n");
	}
	printf("bye...\n");
}
