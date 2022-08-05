#include <stdio.h>
int main()
{  int a,b,c;
	printf("This prog displays the max value of given 3 integers\n");
	printf("Please enter three integers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{ if(a>c) printf("%d",a);
	  else
	    printf("%d",c);
	}
	else
	{ if(b>c) printf("%d",b);
	  else
	    printf("%d",c); 	
	}
	return 0;
}
	
