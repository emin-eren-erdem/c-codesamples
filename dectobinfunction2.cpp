#include <stdio.h>
void binary(int);
int bnum;
int main()
{ int num;
  printf("This prg converts a decimal value to binary\n");
  printf("Enter a positive integer value ");
  scanf("%d",&num);	
  binary(num);
  printf("Result is %d\n",bnum);
  return 0;
}

void binary(int dnum)
{ int base,reminder;
  bnum=0; base=1;
  while(dnum>0)
  { reminder=dnum%2;
    bnum=bnum+reminder*base;
    base=base*10;
  	dnum=dnum/2;
  }		
}
