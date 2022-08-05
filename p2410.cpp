#include <stdio.h>
int main()
{  int m,f,g;
	printf("Please enter the midterm and final exam grades\n");
	scanf("%d %d",&m,&f);
	if((m>100)||(f>100))
    	{printf("You entered wrong input\n");
	     return 0;
	    }
	g=m*0.4+f*0.6;
	printf("Your grade is %d\n",g);
	return 0;
}
	
