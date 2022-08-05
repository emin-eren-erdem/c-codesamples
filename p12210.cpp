#include <stdio.h>
int main()
{ float t,y=0;
  int i,k;
  k=-1;
  for(i=1;i<=10;i++)
   { 
     t=1.0/i;
     k=k*(-1);
     t=t*k;
     y=y+t;
   }
   
  
		
printf("Result=%.2f",y);	
return 0;	
}
