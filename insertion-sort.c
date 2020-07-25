#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int array[], int n);

int main()
	{
		int array[10] = {55,3000,54,74,100,76,89,4,9,2};
		int i, n, index, temp;
		int smallest;

		for(i=0; i < 10; i++)
		{
			printf("%d \n",array[i]);
		}
#if 0
	   smallest = array[0];  // First element
        // Find Smallest number
		for(i=1; i < 5; i++)
		{
			if (smallest > array[i]) 
				{
					smallest = array[i];
					index = i;
				}
		}

		temp = array[0];
		array[0] = smallest; 
		array[index] = temp;

		printf("smallest %d \n",smallest);



		 smallest = array[1];  // First element
			// Find Smallest number
			for(i=2; i < 5; i++)
			{
				if (smallest > array[i]) 
					{
						smallest = array[i];
						index = i;
					}
			}
		
			temp = array[1];
			array[1] = smallest; 
			array[index] = temp;
		
			printf("second smallest %d \n",smallest);


		 smallest = array[2];  // First element
			// Find Smallest number
			for(i=3; i < 5; i++)
			{
				if (smallest > array[i]) 
					{
						smallest = array[i];
						index = i;
					}
			}
		
			temp = array[2];
			array[2] = smallest; 
			array[index] = temp;
		
			printf("third smallest %d \n",smallest);

		 smallest = array[3];  // First element
			// Find Smallest number
			for(i=4; i < 5; i++)
			{
				if (smallest > array[i]) 
					{
						smallest = array[i];
						index = i;
					}
			}
		
			temp = array[3];
			array[3] = smallest; 
			array[index] = temp;
		
			printf("fourth smallest %d \n",smallest);


		 smallest = array[4];  // First element
			// Find Smallest number
			for(i=5; i < 5; i++)
			{
				if (smallest > array[i]) 
					{
						smallest = array[i];
						index = i;
					}
			}
		
			temp = array[4];
			array[4] = smallest; 
			array[index] = temp;
		
			printf(" fith smallest %d \n",smallest);




#endif


       insertion_sort(array, 10);

		for(i=0; i < 10; i++)
		{
			printf("%d \n",array[i]);
		}

		
		return 0;
		
	};
	




	
void insertion_sort(int array[], int n)
{
	int i, j;
	int temp = 0;
	int smallest, index;
	for(i = 0; i < n; i++)
	{
		smallest = array[i];
		for (j = i+1; j < n; j++)
		{
			while (smallest > array[j]  )
			{
		      smallest = array[j];
			  index = j;
			}
		}
		
		temp = array[i];
		array[i] = array[index];  // smallest
		array[index] = temp;  // Initial element
		
	}

}


