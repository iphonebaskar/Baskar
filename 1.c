#include<stdio.h>
void main()
{
	int n;
	printf("ENter number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("positive no");
	}
	else if(n<0)
	{
		printf("negative number");
	}
	else
	{
		printf("Zero");
	}
}
