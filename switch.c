#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	switch(n)
	{
		case 0:printf("the number is zero");
		break;
		case 1:printf("the number is one");
		break;
		default:printf("invalid number");
		break;
	}
}
