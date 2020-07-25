#include <stdio.h>
#include <stdlib.h>
#define max  20

int i, n, number;

int smallest;


void insertion_sort(int array[], int n);

int main()
	{
		int array[max];
		int  n;
		int i = 0;

		printf("Enter size of array: ");
		scanf("%d", &n);
		
		printf("Enter %d elements in the array : ", n);
	    for(i=0; i<n; i++)
	    {
	        scanf("%d", &array[i]);
	    }

		printf("\nElements in array are: \n");
	    for(i=0; i<n; i++)
	    {
	        printf("%d, \n", array[i]);
	    }

	
		insertion_sort(array, n);

		for(i=0; i < n; i++)
		{
			printf("%d \n",array[i]);
		}
		
	
	    return 0;
	
	}

void insertion_sort(int array[], int n)
{
	int i, j;
	int temp = 0;
	int index;
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



