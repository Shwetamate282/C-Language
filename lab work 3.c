#include<stdio.h> // header file

main()
{
	int x=2;
	int y=3;
	int ans;
	ans= (x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	printf("%d",ans);
}