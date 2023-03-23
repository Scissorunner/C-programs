#include<stdio.h>

int main()
{
	int sum = 0, num, i, max;
	printf("\nEnter the number of array elements: ");
	scanf("%d", &num);

	int array[num];
	printf("Enter the array elements\n");
	for (i = 0; i < num; i++)
	{
		printf("-> ");
    scanf("%d", &array[i]);
	}
	max = array[0];
	for (i = 0; i < num; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	printf("The largest number is: %d\n", max);
  
  return 0;
}