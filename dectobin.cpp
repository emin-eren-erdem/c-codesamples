#include <stdio.h>
int main()
{ int dnum,bnum,base,reminder;
  printf("This prg converts an decimal value to binary\n");
  printf("Enter an  positive integer value ");
  scanf("%d",&dnum);	
  bnum=0; base=1;
  while(dnum>0)
  { reminder=dnum%2;
    bnum=bnum+reminder*base;
    base=base*10;
  	dnum=dnum/2;
  }	
  printf("Result is %d\n",bnum);
  return 0;
}
