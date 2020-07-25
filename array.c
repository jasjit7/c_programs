#include <stdio.h>
int main()
{
	int i;
	int numbers[200];
	int a = 2 ;
	int b = 500 ;
	for(i = 0; i < 100; i++)
	{
		numbers[i] = a;
		printf("Number a [%d] = %d \n", i, a);
		a = a + 2;
	}
	for(i = 100; i < 200; i++)
	{
		numbers[i] = b;
		printf("Number b [%d] = %d \n", i, b);
		b = b + 4;
	}
	
	return 0;
}
