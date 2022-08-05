#include <stdio.h>
int main()
{ int x[10][10];
  int i,j,n,m,sum;
  printf("Enter the number of rows ");
  scanf("%d",&n);
   printf("Enter the number of columns ");
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		printf("Enter row %d column %d ",i,j);
  		scanf("%d",&x[i][j]);
	}
  }
  
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		printf("%4d",x[i][j]);
	}
   printf("\n");	
  }
  
  for(i=0;i<n;i++)
  { sum=0; 
  	for(j=0;j<m;j++)
  	{
  		sum=sum+x[i][j];
	}
   printf("Average of %d. row is %.2f\n",i,float(sum)/m);	
  }
	
return 0;	
}
