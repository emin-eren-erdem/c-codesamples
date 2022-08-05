#include <stdio.h>

int main()
{
	int num1,num2;
	int i;
	printf("That prog calculates the LCM\n");
	printf("Enter number 1 value\n");
	scanf("%d",&num1);
	printf("Enter number 2 value\n");
	scanf("%d",&num2);
	
	for(i=1;i<=num1*num2;i++)
	{
		if(i%num1==0 && i%num2==0)
	{
		printf("LCM :%d \n",i);
		break;
	}
	}
	
	
	
	return 0;
}
