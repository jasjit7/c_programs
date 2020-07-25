#include <stdio.h>
#include <string.h>
int main()
{

	char array[40];
	char *name = "jasjit";

	printf("%s \n",name);
	
	sprintf(array," Name is %s ", name,30);
	printf("%s len = %d \n ", array, strlen(array));

	sprintf(array + strlen(array) ," age is %d ",30);
	printf("%s len = %d \n", array, strlen(array));

	sprintf(array + strlen(array)  ," country is %s", "Canada");
	printf("%s len = %d \n", array, strlen(array));
	

	printf("%s \n",array);


	for (int i = 0; i < 40; i++)
		printf("char = %c \n", array[i]);

	
	return 0;	
}
