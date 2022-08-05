#include <stdio.h>
void pm(int);

int main()
{  int age;
   printf("This prog calculates the amount of pocket money\n");
   printf("Enter the age of child ");
   scanf("%d",&age);
   pm(age);	
  return 0;
}

void pm(int a)
{ int money;
  if (a<7) printf("No money!\n");
   else
     if(a<12)
     { money=a*5;
       printf("pocket money is %d\n",money);
	 }
     else
      if (a<18)
      { money=a*7;
       printf("pocket money is %d\n",money);
	  }
	  else
	    printf("No money! He/She can work!\n");
}
