#include <stdio.h>
int main()
{ int x[6]={25,17,9,36,48,24};
  int max,i;
 printf("This prg calculates the sum of an array with 6 elements\n");

 for(i=0;i<6;i++)
   {  printf("%4d",x[i]); }	
 printf("\n");  
 
 max=x[0];
 for(i=0;i<6;i++)
 { if(x[i]>max) max=x[i];  }

 printf("Maximum value of the array is %d\n",max);
 		
return 0;	
}
