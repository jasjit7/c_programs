#include <stdio.h>
#include <stdlib.h>
#define max  20
int i = 0;
int main()
	{
		int array[max];
		int  n, number;
		int i = 0, found=0;

		printf("Enter size of array: ");
		scanf("%d", &n);
		
		printf("Enter %d elements in the array : ", n);
	    for(i=0; i<n; i++)
	    {
	        scanf("%d", &array[i]);
	    }
		

		  

		printf("Enter the number: ");
		scanf("%d", &number);

		

		for(i=0; i<n; i++)
		{
			printf("  current nuber %d \n",array[i]);
			if(array[i] == number)
			{
				printf("Found");
				found = 1;
				break;
			}
						
		}	
		
		if (found ==1 )
		{	
			printf("Number Found \n");
		}
		else
		{
			printf("Number Not Found \n");
		}
	

		return 0;
}

	
