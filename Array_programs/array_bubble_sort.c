#include <stdio.h>
 
int main() {

  int array[100], numbers, i, d, swap;
 
  printf("\nEnter number of elements in your array: ");
  scanf("%d", &numbers);
 
  printf("Enter %d integers: \n", numbers);
  for (i = 0; i < numbers; i++) {
    printf("-> ");
    scanf("%d", &array[i]);
  } 
 
  for (i = 0 ; i < numbers - 1; i++) {
    for (d = 0 ; d < numbers - i - 1; d++) {
      if (array[d] > array[d+1]) { /* For decreasing order use < */
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("\nSorted list in ascending order:\n");
  printf("\nArray = ");
 
  for (i = 0; i < numbers; i++) {
     printf("%d ", array[i]);
  }
  printf("\n\n");
  return 0;
}