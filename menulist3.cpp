#include <stdio.h>
void menu();
int rect();
void circ();

int main()
{ 
 menu();
return 0;
}
void menu()
{ int choice=1;
 while (choice!=3)
 {
  printf("AREA MENU\n");
  printf("1 - Rectangle\n");
  printf("2 - Circle\n");
  printf("3 - Exit\n");
  printf("   Your choice : \n");	
  scanf("%d",&choice);	
  switch(choice)
  {
  	case 1: rect(); break;
	case 2: circ(); break;
	case 3: break;
	default : printf("Wrong choice!\n");   		
  }
 }
}

int rect()
{ int a,b,area;
  printf("Enter the a & b lines ");
  scanf("%d %d",&a,&b);þ
  area=a*b;
  printf("Area of rectangle is %d \n",area);
  if (a==b) rect();
  return area;
}

void circ()
{ float r,area;
  r=rect();
  area=3.14*(r*r);
  printf("Area of circle is %.2f \n",area);
}
