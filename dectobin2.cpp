#include <stdio.h>
int main()
{ int num,bnum,reminder,base;
  printf("This prog converts a decimal value to binary value\n");
  printf("Enter an integer decimal value ");
  scanf("%d",&num);
  bnum=0;
  base=1;
  while(num>0)
  {
  	reminder=num%2;
  	bnum=bnum+base*reminder;
  	base=base*10;
  	num=num/2;
  }	
printf("Result is %d\n",bnum);	
return 0;	
}
