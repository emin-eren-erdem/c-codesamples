#include <stdio.h>
int main()
{ int x[100],y[100],z[100];
  int i,n,d,j;
  printf("Enter the number of array elements ");
  scanf("%d",&n);
  printf("Enter the array elements \n");
  for(i=0;i<n;i++)
  { printf("Enter the %d . element ",i+1);
    scanf("%d",&x[i]);
  }
  j=0; d=0;
  for(i=0;i<n;i++)
     { if(x[i]%2==0) 
	     { z[j]=x[i]; j++; }
	   else
	      { y[d]=x[i]; d++; } 
     }
   printf("\\ Odd value array \n");
     
   for(i=0;i<j;i++)   
	  printf("%5d",y[i]);
  
   printf("\nEven value array \n");
     
   for(i=0;i<d;i++)   
	  printf("%5d",z[i]);  
	  
	  
return 0;
	
}
