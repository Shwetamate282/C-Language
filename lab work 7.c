#include<stdio.h> // header file

main()
{
	int x=10;
	int y=20;
	int z=30;
	int ans;
	ans=(x*x)+(2*x*y)+(2*x*z)+(y*y)+(2*x*z)+(z*z);
	printf("%d",ans);
}