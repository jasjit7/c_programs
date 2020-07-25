#include <stdio.h>

int main()
	{

	    int array[5] = {3,4,5,2,1};
 		int i;
		int *p;
		for(i=0; i< 5 ;i++)
		{
			printf("array %d \n", array[i]);
		
		}


		p = &array[0];
   
		int sum = 0;
		for(i=0; i< 5 ;i++)
		{
			sum += *p;
			p++;
		}

		printf("sum  = %d ", sum);
       
		
		return 0;
	}
