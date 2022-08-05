#include <stdio.h>
int main()
{
	int a,b,m,k,i;
	printf("This program calculates the LCM.\n");
	printf("Please enter a and b values.\n");
	scanf("%d %d",&a,&b);
	i=1; m=1;
    k=a*b;
    while ((k>a) or (k>b))
    { k=k/i;
      if(k%i==0) { m=m*i; i++; }		
	}
	printf("%d",m);
	return 0;
}
