#include<stdio.h> // header file

main()
{
	int x=3;
	int y=4;
	int z=5;
	int ans;
	ans=(x*x*x)-(y*y*y)-(z*z*z)-(3*x*x*y)+(3*x*y*y)-(3*y*y*z)-(3*x*z*z)+(3*x*z*z)-(3*x*x*z)+(6*x*y*z);
	printf("%d",ans);
}