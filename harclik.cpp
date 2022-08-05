#include <stdio.h>

int main()
{  int age,money;
   printf("This prog calculates the amount of pocket money\n");
   printf("Enter the age of child ");
   scanf("%d",&age);
   if (age<7) printf("No money!\n");
   else
     if(age<12)
     { money=age*5;
       printf("pocket money is %d\n",money);
	 }
     else
      if (age<18)
      { money=age*7;
       printf("pocket money is %d\n",money);
	  }
	  else
	    printf("No money! He/She can work!\n");	
  return 0;
}

