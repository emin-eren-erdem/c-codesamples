#include <stdio.h>
int main()
{ int cl[5],i,total,sno,clas;
  FILE *f;
  f=fopen("school.txt","r");
  for(i=1;i<=4;i++)
           cl[i]=0;
  total=0;
  fscanf(f,"%d %d",&sno,&clas);
  while(!feof(f))
  { 
     for(i=1;i<=4;i++)
       if(clas==i) cl[i]++;
  
   fscanf(f,"%d %d",&sno,&clas);    
  }	
  printf("Class  Amount \n");
  printf("-----  ------ \n");
  for(i=1;i<=4;i++)
   {
    printf(" %d    %d \n",i, cl[i]);
  	total=total+cl[i];
   }
  printf("  Total %d \n",total);	
	
	
return 0;	
}
