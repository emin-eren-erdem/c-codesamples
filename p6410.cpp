#include <stdio.h>
int main()
{  int a,b,c,m;
	printf("This prog displays the max value of given 3 integers\n");
	printf("Please enter three integers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{ if(a>c) m=a;
	  else
	    m=c;
	}
	else
	{ if(b>c) m=b;
	  else
	   m=c;	
	}
	printf("Max value is %d\n",m);
	return 0;
}
	
