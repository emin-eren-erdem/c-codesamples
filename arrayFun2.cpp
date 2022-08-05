#include <stdio.h>

float average(int a[],int k);

int main()
{ int x[6]={25,6,123,98,45,27};
  int n=6;
  
  printf("Average of array is %.2f\n",average(x,n));
	
return 0;	
}
float average(int a[],int k)
{ int i,sum;
  float avr;
  sum=0;
  for(i=0;i<k;i++)
    sum=sum+a[i];
    
  avr=sum/k;
  return avr;	
}

