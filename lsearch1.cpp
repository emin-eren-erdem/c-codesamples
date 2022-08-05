#include <stdio.h>
int main()
{ int x[100],i,s,n;
  printf("Enter thw number of elements in array <100 ");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  { printf("Enter %d. element of array ",i+1);
    scanf("%d",&x[i]);	
  }
	
  for(i=0;i<n;i++)
  { printf("%6d",x[i]);	}	

  printf("\nEnter the search value ");
  scanf("%d",&s);
  
  for(i=0;i<n;i++)
  { if(x[i]==s)
     { printf("It is exists in array\n"); break;  }  	
  }	
  if(i==n) printf("It is not exsts in array\n");	
	
 return 0;	
}
