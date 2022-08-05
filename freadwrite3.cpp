#include <stdio.h>
int main()
{ 
  int sno,grade,d,count=0;
  FILE *f;
  FILE *f2;
  f=fopen("first.txt","r");
  f2=fopen("higher.txt","w");
  
  fscanf(f,"%d %d",&sno,&grade);
  while(!feof(f))
  {  
     if(grade>=50)
     { 
	   fprintf(f2,"%d %d\n",sno,grade);
       count++;
	 }
	 fscanf(f,"%d %d",&sno,&grade);
  }	
  
  printf("%d records written\n",count);
  fclose(f);
  fclose(f2);	
 /* d = remove("first.txt");
  d=rename("first","higher"); */
		
return 0;
	
}
