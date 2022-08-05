#include <stdio.h>
int main()
{
 int sno,me,fe,grade;
 FILE *f;
 FILE *f1;
 f=fopen("exams.txt","a");
 f1=fopen("original.txt","w");
 printf("This prog stores student number and exam grades\n");
 printf("Enter the std number, midter and final exam grades\n");
 printf("Enter 0 for std number to stop execution\n");
 
 printf("Student number : ");
 scanf("%d",&sno);
 printf("Midterm exam grade : ");
 scanf("%d",&me);
 printf("Final exam grade : ");
 scanf("%d",&fe);
 
 while(sno!=0)
 { grade=0.4*me+0.6*fe; 
   fprintf(f,"%10d %3d\n",sno,grade);
   fprintf(f1,"%d %d %d\n",sno,me,fe);
   printf("Student number : ");
   scanf("%d",&sno);
   printf("Midterm exam grade : ");
   scanf("%d",&me);
   printf("Final exam grade : ");
   scanf("%d",&fe);
   printf("\n");
 }
 fclose(f);
 fclose(f1); 		
return 0;
	
}
