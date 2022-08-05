#include <stdio.h>
float average(int a[], int k);

int main()
{ int x[100]={34,26,98,37,13,24};
  int n=6;
  
  printf("Average of array is %.2f",average(x,n));	 	
	
return 0;	
}

float average(int a[], int k)
{ int i,sum=0;
  float avr;
  for(i=0;i<k;i++)
     sum=sum+a[i];
  avr=sum/k;	
  return avr;	
}
