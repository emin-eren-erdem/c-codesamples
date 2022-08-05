#include <stdio.h>
int main()
{ int x[100],y[100],z[100];
  int i,n,j,k;
  printf("Enter the number of array elements ");
  scanf("%d",&n);
  printf("Enter the array elements \n");
  for(i=0;i<n;i++)
  { printf("Enter the %d . element ",i+1);
    scanf("%d",&x[i]);
  }
  
  k=0; j=0;
  for(i=0;i<n;i++)
     { if(x[i]%2==0)  
	     { z[k]=x[i]; k++; }
        else
         { y[j]=x[i]; j++; }
     }
   printf("j=%d k=%d\n",j,k);  
   printf("\nArray with even values \n");  
   for(i=0;i<j;i++)   
	  printf("%5d",z[i]);
	  
	printf("\nArray with odd values \n"); 
   	for(i=0;i<k;i++)   
	  printf("%5d",y[i]);  
return 0;
	
}
