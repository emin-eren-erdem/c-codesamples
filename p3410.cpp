#include <stdio.h>
int main()
{  int m,f,g;
	printf("Please enter the midterm and final exam grades\n");
	scanf("%d %d",&m,&f);
	if((m<=100)&&(f<=100))
    	{ g=m*0.4+f*0.6;
	      printf("Your grade is %d\n",g);	
	    }
	else
	{	 
	  printf("You entered wrong input\n");
    }
	return 0;
}
	
