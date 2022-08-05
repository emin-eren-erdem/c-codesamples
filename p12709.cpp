#include <stdio.h>
int main()
{   
    int by,age;

	printf("This program displays your age when you enter your birth year\n");
	printf("Please enter your birth year\n");
	scanf("%d",&by);
	age=2018-by;
	printf("You are %d years old\n",age);
	
 return 0;	
}
