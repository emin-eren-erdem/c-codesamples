#include <stdio.h>
int main()
{ int x[6]={25,6,123,98,45,27};
  int i,sum,n=6;
  float avr;
  sum=0;
  for(i=0;i<n;i++)
    sum=sum+x[i];
    
  avr=sum/n;
  printf("Average of array is %.2f\n",avr);
	
return 0;	
}
