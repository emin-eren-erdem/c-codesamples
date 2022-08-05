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
 sno=1;
 while(sno!=0)
 {
  scanf("%d %s",&sno,name);
  fprintf(f,"%d %s\n",sno,name);
 }
 fclose(f); 		
return 0;
	
}
