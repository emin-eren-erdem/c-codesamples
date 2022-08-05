#include <stdio.h>

int main ()
{
	int num1,num2,a,m;
	printf("Enter two numbers");
	scanf("%d %d",&num1,&num2);
	a=num1*num2;
	if(num1>num2)
	{
		m==num1;
	}
	else {
		m==num2;
	}
	while (m<=a){
		if(m%num1==0 & m%num2==0)
		{
			printf("Least Common Multiple: %d",m);
			break;
				}
	m++;			
	}
	return 0;
}
