#include <stdio.h>
int db(int);

int main()
{ int num;
  printf("This prog converts a decimal value to binary value\n");
  printf("Enter an integer decimal value ");
  scanf("%d",&num);
  
printf("Result is %d\n",db(num));	
return 0;	
}

int db(int dv)
{ int bnum,base,reminder;
  bnum=0;
  base=1;
  while(dv>0)
  {
  	reminder=dv%2;
  	bnum=bnum+base*reminder;
  	base=base*10;
  	dv=dv/2;
  }		
  return reminder;	
}
