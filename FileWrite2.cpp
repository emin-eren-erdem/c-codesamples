#include <stdio.h>
int main()
{
 int sno;
 char name[20];
 FILE *f;
 f=fopen("ali.txt","w");
 printf("This prog stores student number and names\n");
 printf("Enter the std number and name\n");
 printf("Enter 0 for std number to stop execution\n");
 
 scanf("%d %s",&sno,name);
 while(sno!=0)
 {
  fprintf(f,"%d %s\n",sno,name);
  scanf("%d %s",&sno,name);
  
 }
 fclose(f); 		
return 0;
	
}
