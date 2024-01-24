#include<stdio.h>

main()
{
	int a,b;
	printf("Enter a&b:");
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		printf("a is minimum");
	}
	else if(b<a)
	{
		printf("b is minimum");
	}
	else if(a==b)
	{
		printf("a and b are equal");
	}
}