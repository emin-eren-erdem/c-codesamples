#include <stdio.h>
int main()
{ int x[6]={46,25,18,57,63,41};
  int i,j,min,n,k,temp;
  n=6;
  for(i=0;i<n-1;i++)
  { min=x[i]; k=i;
  	
  	for(j=i;j<n;j++)
  	{ if(x[j]>min)
	    { min=x[j];
	      k=j;
	    }    	
    }  		
  	temp=x[i];
	x[i]=x[k];
	x[k]=temp;  	
  	
   }	

  for(i=0;i<n;i++)
  { printf("%6d",x[i]);	}	

  	
 return 0;	
}
