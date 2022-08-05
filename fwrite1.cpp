#include <stdio.h>
int main()
{ int stdnum;
  char stdname[20];
  FILE *f;
  f=fopen("students.txt","a");
  printf("This this prog stores students info in a file \n");
  printf("Enter the number and name of student\n");
  printf("To stop the data entry type 0 as student number\n");
  stdnum=1;
  
  while(stdnum!=0)
  { 
     printf("Student number : "); 
     scanf("%d",&stdnum);
     printf("Student name : ");
     gets(stdname);
  	 fprintf(f,"%8d %20s\n",stdnum,stdname);
  }	
  fclose(f);	
		
return 0;
	
}
