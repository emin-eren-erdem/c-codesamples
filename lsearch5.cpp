#include <stdio.h>
int main()
{ int x[100]={46,25,18,57,46,41};
  int i,s,n=6,count=0;

/*  printf("Enter thw number of elements in array <100 ");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  { printf("Enter %d. element of array ",i+1);
    scanf("%d",&x[i]);	
  }  */
	
  for(i=0;i<n;i++)
  { printf("%6d",x[i]);	}	

  printf("\nEnter the search value ");
  scanf("%d",&s);
  
  for(i=0;i<n;i++)
  { if(x[i]==s)
     { count++; }  	
  }	
  if(count>0) printf("It  exists %d times in array\n",count);	
	else  printf("It not exists in array\n");	
 return 0;	
}
