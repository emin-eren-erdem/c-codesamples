#include <stdio.h>
int maxi(int a[], int k);

int main()
{ int x[100]={34,49,26,98,37,13,24};
  int n=7;
  
  printf("Maximum of array is %d",maxi(x,n));	 	
	
return 0;	
}

int maxi(int a[], int k)
{ int i,max1,max2;
  max1=a[0];  max2=max1;
  for(i=1;i<k;i++)
     if(a[i]>max1) 
	 { max2=max1;
       max1=a[i]; }
	
  return max2;	
}
