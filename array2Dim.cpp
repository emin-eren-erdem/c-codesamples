#include <stdio.h>
int main()
{ int x[10][10];
  int n,m,i,j;
  printf("What is the number of rows ");
  scanf("%d",&n);
  printf("What is the number of columns ");
  scanf("%d",&m);
  
  for(i=0;i<n;i++)
  { for(j=0;j<m;j++)
     { printf("Enter value of %dx%d ",i,j);
       scanf("%d",&x[i][j]);
	 }
  } 
  
  for(i=0;i<n;i++)
  { for(j=0;j<m;j++)
     { printf("%4d",x[i][j]);}
     printf("\n");
  } 
  		
return 0;	
}
