#include <stdio.h>
void pm(int);

int main()
{ int money, age=1;
 while(age!=0)
 { money=0;
  printf("This prog calculates pocket money amount\n");
  printf("Enter the age ");
  scanf("%d",&age);
  pm(age);
 }
 return 0;	
}

void pm(int age)
{ int money;
 if (age<7) printf("No money!");
  else
    if(age<12)  money=age*5;
	else
	  if(age<18)  money=age*7;
	  else
	   printf("You can work! No money.");
  if(money>0) printf("Pocket money is %d TL\n",money);
}
