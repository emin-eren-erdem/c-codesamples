#include <stdio.h>
int main()
{ 
  int sno,grade;
  FILE *f;
  f=fopen("first.txt","a");
  printf("Enter the student num and grade\n");
  printf("To stop entry type 0 for num\n");
  sno=1;
  while(sno!=0)
  {  
     scanf("%d %d",&sno,&grade);
  	 fprintf(f,"%d %d\n",sno,grade);
  }	
  fclose(f);	
		
return 0;
	
}
