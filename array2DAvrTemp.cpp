#include <stdio.h>
int main()
{ int x[6][4];
  int i,j,sum;
  float avr;
  printf("Enter the tempr values row by row\n");
  for(i=0;i<6;i++)
  { for(j=0;j<4;j++)
     { printf("Enter value of %dx%d ",i,j);
       scanf("%d",&x[i][j]); }
  } 
  
  for(i=0;i<6;i++)
  { for(j=0;j<4;j++)
     { printf("%4d",x[i][j]);}
    printf("\n");
  } 
  
  for(i=0;i<6;i++)
  { sum=0; 
    for(j=0;j<4;j++)
     { sum=sum+x[i][j];}
     avr=sum/4.0;
     printf("year %d avr temp is %.2f\n",i+1,avr);
  } 
  	
return 0;	
}
