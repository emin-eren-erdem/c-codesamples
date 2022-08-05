#include <stdio.h>
int main()
{ int age,money=0;
  printf("This prog calculates pocket money amount\n");
  printf("Enter the age ");
  scanf("%d",&age);
  if (age<7) printf("No money!");
  else
    if(age<12)  money=age*5;
	else
	  if(age<18)  money=age*7;
	  else
	   printf("You can work! No money.");
  if(money>0) printf("Pocket money is %d TL\n",money);	
 return 0;	
}
