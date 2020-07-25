#include <stdio.h>
#include <string.h>

int  main()
{

	char name[10] = "jasjit";
	
	char *name1 = "jasjit";
		
    char *charaters = &name[0];

	int name_len = strlen(name);
	
	int name1_len = strlen(name1);

	int i; 
	for (i = 0; i < 10 ; i++)
		printf(" char %c  %d \n",charaters[i], charaters[i]);

	printf(" %s len %d size %d \n", name, name_len, sizeof(name));
	printf(" %s len %d size %d \n", name1, name1_len, sizeof(name1));

   
}
