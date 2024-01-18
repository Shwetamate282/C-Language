#include<stdio.h> // header file

main()
{
	int x=20;
	int y=10;
	int ans;
	ans= (x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y);
	printf("%d",ans);
}