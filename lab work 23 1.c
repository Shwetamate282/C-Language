#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a&b:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is maximum");
	}
	else if(b>a)
	{
		printf("b is maximum");
	}
}