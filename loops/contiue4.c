#include<stdio.h>
void main()
{
	int i=1;
	while(++i<5)
	{
		printf("hi...\n");
		continue;
		printf("bye...\n");
	}
	printf("out of loops\n");
}
