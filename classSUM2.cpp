#include <stdio.h>
int main()
{ int sno,clas,c[5],total,i;
  FILE *f;
  f=fopen("school.txt","r");
  if(f==NULL) { printf("File is NOT founded\n"); return -1; }
  
  for(i=1;i<=4;i++) c[i]=0;
  total=0;
  
  fscanf(f,"%d %d",&sno,&clas);
  while(!feof(f))
  {  
    for(i=1;i<=4;i++)
      if(clas==i) c[i]++;
  	fscanf(f,"%d %d",&sno,&clas);	
  }	
  
  printf("class   amount\n");
  printf("-----   ------\n"); 	
  for(i=1;i<=4;i++)
   { printf("  %d       %d\n",i,c[i]);	
     total=total+c[i];
   }  
  printf("  TOTAL   %d\n",total);		
  	
 fclose(f);	
 return 0;	
}
