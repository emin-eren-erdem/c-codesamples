#include <stdio.h>
int main()
{ int age,money;
  printf("This prog calculates pocket money amount\n");
  printf("Enter the age ");
  scanf("%d",&age);
  if (age<7) printf("No money!");
  else
    if(age<12)
     { money=age*5;
       printf("Pocket money is %d TL\n",money);	
	 }
	else
	  if(age<18)
	  { money=age*7;
        printf("Pocket money is %d TL\n",money);		
	  }
	  else
	   printf("You can work! No money.");
	
 return 0;	
}
