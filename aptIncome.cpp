#include <stdio.h>
#include <stdlib.h>

main()
{ int apt[50][10],i,j,n,m,sum;
  float avr;
  printf("Enter number of total floors in aparment\n");
  scanf("%d",&n);
  printf("Enter number of suits in floor of apartment\n");
  scanf("%d",&m);
  
  printf("Enter the incomes of suits \n");
  for(i=0;i<n;i++)
  { for(j=0;j<m;j++)
      { printf("%d. floor  %d. suit ",i+1,j+1);
        scanf("%d",&apt[i][j]);
      }  
  }  
  printf("\n Your apartment is:\n"); 
  for(i=0;i<n;i++)
  { printf("\n");
    for(j=0;j<m;j++)
      { printf("%8d",apt[i][j]) ;}  
  }  
  printf("\n");
  for(i=0;i<n;i++)
  { sum=0; 
    for(j=0;j<m;j++)
      { 
        sum=sum+apt[i][j];
      } 
    avr=sum/m;  
    printf("Average of %d. flat is %.2f\n",i+1,avr);   
  }      
  
  printf("\n");   
  system("pause");
  return 0;
}    

