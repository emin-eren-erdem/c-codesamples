#include <stdio.h>
int main()
{ int x[100];
  int i,n,max,max2;
  printf("What is the size of array ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   { printf("Enter the %d. element of array",i+1);
     scanf("%d",&x[i]);
   }
   for(i=0;i<n;i++)
   { printf("%4d",x[i]); }
   printf("\n"); 
   
   max=x[0]; max2=max;
   for(i=1;i<n;i++)
   { if(x[i]>max)  max=x[i];
     else
       if (x[i]>max2) max=x[i];
   }
   
   printf("The max of array is %d\n",max);
   		
return 0;	
}
