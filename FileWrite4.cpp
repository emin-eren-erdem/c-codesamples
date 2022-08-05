#include <stdio.h>
int main()
{
 int sno,me,fe,grade;
 FILE *f;
 f=fopen("exams.txt","a");
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
   
   printf("Student number : ");
   scanf("%d",&sno);
   printf("Midterm exam grade : ");
   scanf("%d",&me);
   printf("Final exam grade : ");
   scanf("%d",&fe);
 }
 fclose(f); 		
return 0;
	
}
