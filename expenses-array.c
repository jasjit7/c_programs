#include <stdio.h>
	float expenses[13];
	int count;
	float year_expenses = 0;
	
int main()
{
	for(count = 0; count < 13; count++)
		{
		printf("Enter expenses for month %d", count);
		scanf("%f", &expenses[count]);
		}
	for(count = 0; count < 13; count++)
		{
		printf("Month %d = $%.2f\n", count, expenses[count]);
		year_expenses += expenses[count];
		}
	printf("Yearly expenses are $%.2f\n", year_expenses);
	return 0;
}
