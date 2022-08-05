#include <stdio.h>
int main()
{  int a,k;
	printf("This prog displays odd or even for a given integer\n");
	printf("Please enter an integers\n");
	scanf("%d",&a);
	k=a/2;
	
	if(k*2==a) printf("Even\n");
	else printf("Odd\n");
	
	return 0;
}
	
