#include <stdio.h>
int binary(int);

int main()
{ int num;
  printf("This prg converts a decimal value to binary\n");
  printf("Enter a positive integer value ");
  scanf("%d",&num);	
  
  printf("Result is %d\n",binary(num));
  return 0;
}

int binary(int dnum)
{ int bnum,base,reminder;
  bnum=0; base=1;
  while(dnum>0)
  { reminder=dnum%2;
    bnum=bnum+reminder*base;
    base=base*10;
  	dnum=dnum/2;
  }	
 return bnum;	
}
