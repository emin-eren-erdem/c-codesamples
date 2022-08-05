#include <stdio.h>

int maxi(int a[],int k);

int main()
{ int x[6]={25,6,123,98,45,27};
  int n=6;
  printf("Maximum of array is %d\n",maxi(x,n));
return 0;	
}

int maxi(int a[],int k)
{ int i,max;

  max=a[0];
  for(i=1;i<k;i++)
    if(a[i]>max) max=a[i];
    
  return max;	
}

