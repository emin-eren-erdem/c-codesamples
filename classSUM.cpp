#include <stdio.h>
int main()
{ int sno,clas,c1,c2,c3,c4,total;
  FILE *f;
  f=fopen("school.txt","r");
  if(f==NULL) { printf("File is NOT founded\n"); return -1; }
  c1=0; c2=0; c3=0; c4=0; total=0;
  
  fscanf(f,"%d %d",&sno,&clas);
  while(!feof(f))
  {  if(clas==1) c1++;
     else if (clas==2) c2++;
       else if (clas==3) c3++;
         else if(clas==4) c4++;
  	fscanf(f,"%d %d",&sno,&clas);	
  }	
  
  printf("class   amount\n");
  printf("-----   ------\n"); 	
  printf("  1       %d\n",c1);	
  printf("  2       %d\n",c2);		
  printf("  3       %d\n",c3);		
  printf("  4       %d\n",c4);
  total=c1+c2+c3+c4;
  printf("  TOTAL   %d\n",total);		
  	
 fclose(f);	
 return 0;	
}
