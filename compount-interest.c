


#include <stdio.h>
#include <math.h>
int main(){
	float ci, principal, rate, year;

	printf("Enter the principal:");
	scanf("%f", &principal);

	printf("Enter the rate:");
	scanf("%f", &rate);

	printf("Enter the years:");
	scanf("%f", &year);

	ci=principal*((pow((1+rate/100),year)-1));
	printf("Compount interest for %f is %f", year, ci);
	return 0;

}

	

	

