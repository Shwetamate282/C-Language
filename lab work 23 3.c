#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
	if(c>d)
	{
		printf("c is maximum");
	}
	else
	{
		printf("d is maximum");
	}
}