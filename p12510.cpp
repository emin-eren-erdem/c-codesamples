#include <stdio.h>
void ali(int);

int main()
{   int n;
    printf("How many times it will be printed? ");
    scanf("%d",&n);
	printf("This was printed in main\n");
	ali(n);
	return 0;
}

void ali(int k)
{  int i;
	for(i=1;i<=k;i++)
	{
   	printf("This was printed within ali function.\n");
    }
}
