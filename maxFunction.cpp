#include <stdio.h>
int maxi(int a[], int k);

int main()
{ int x[100]={34,26,98,37,13,24};
  int n=6;
  
  printf("Maximum of array is %d",maxi(x,n));	 	
	
return 0;	
}

int maxi(int a[], int k)
{ int i,max;
  max=a[0];
  for(i=1;i<k;i++)
     if(a[i]>max) max=a[i];
	
  return max;	
}
