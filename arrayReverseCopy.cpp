#include <stdio.h>
int main()
{ int x[100],y[100];
  int i,n,k;
  printf("Enter the number of array elements ");
  scanf("%d",&n);
  printf("Enter the array elements \n");
  for(i=0;i<n;i++)
  { printf("Enter the %d . element ",i+1);
    scanf("%d",&x[i]);
  }
  k=n-1;
  for(i=0;i<n;i++)
     { y[i]=x[k];
       k--;
     }
   for(i=0;i<n;i++)   
	  printf("%5d",y[i]);
return 0;
	
}
