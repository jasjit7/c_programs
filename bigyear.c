#include <stdio.h>

int calcYear(int year1);
int TARGET_AGE = 88;

int main()
{
	
	int year1, year2;
	printf("What year was you born?");
	printf("Enter as a 4 digit year (YYYY):");
	scanf("%d", &year1);
	year2 = calcYear(year1);
	printf("Someone born in %d will be %d in %d", year1, TARGET_AGE, year2);
	return 0;
}
int calcYear(int year1)
{
	return(year1 + TARGET_AGE);
}

