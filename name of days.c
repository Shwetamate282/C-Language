#include<stdio.h>
main()
{
	char ans;
	printf("Enter Your Choise!");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case 'M':printf("Monday");break;
		case 'T':printf("Tuesday");break;
		case 'W':printf("Wednseday");break;
		case 't':printf("Thurday");break;
		case 'F':printf("Friday");break;
		case 's':printf("saturday");break;
		case 'S':printf("Sunday");break;
	}
}