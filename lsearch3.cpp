#include <stdio.h>
int main()
{ int x[100]={46,25,18,57,63,41};
  int i,s,n=6;
  bool yes=false;
/*  printf("Enter thw number of elements in array <100 ");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  { printf("Enter %d. element of array ",i+1);
    scanf("%d",&x[i]);	
  }
	
  for(i=0;i<n;i++)
  { printf("%6d",x[i]);	}	*/

  printf("\nEnter the search value ");
  scanf("%d",&s);
  
  for(i=0;i<n;i++)
  { if(x[i]==s)
     { yes=true; break;  }  	
  }	
  if(yes) printf("It  exsts in array\n");	
	else  printf("It not exsts in array\n");	
 return 0;	
}
