#include <stdio.h>

int g100(int a[],int k);

int main()
{ int x[6]={25,6,123,98,45,207};
  int n=6;
  printf("The amount of values > 100 is %d\n",g100(x,n));
return 0;	
}

int g100(int a[],int k)
{ int i,count=0;

  for(i=1;i<k;i++)
    if(a[i]>100) count++;
    
  return count;	
}

