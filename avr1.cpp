#include <stdio.h>
int main()
{ int x[100]={34,26,98,37,13,24};
  int i,n=6;  int sum=0;
  float avr;
  for(i=0;i<n;i++)
     sum=sum+x[i];
  avr=sum/n;
  printf("Average of array is %.2f",avr);	 	
	
return 0;	
}
