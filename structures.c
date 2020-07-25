#include <stdio.h>
#include <string.h>

struct data_type
{
	int a;
	int b;
	int *c;
	char name[10];

};
void print_structure(struct data_type data);

int main()
{

	struct data_type data_1;
	

	data_1.a = 10;
	data_1.b = 20;
	data_1.c = &data_1.a;
	strcpy(data_1.name, "Jasjit");

	struct data_type data_2;
	data_2.a = 100;
	data_2.b = 200;
	data_2.c = &data_1.a;
	strcpy(data_2.name, "Jasjit1");	

	*(data_1.c) =  300;
	data_1.a =  400;
	

    printf("size of struct = %d \n", sizeof(data_1));

	print_structure(data_1);

	print_structure(data_2);
	
	return 0;
}


void print_structure(struct data_type data)
{

	printf(" a = %d b = %d c = %d  name %s \n", data.a,data.b, *(data.c),data.name);

}


