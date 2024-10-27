#include <stdio.h>
#define LENGTH 10
void print_array(int *array);
int main(void) {
  int a[LENGTH] = {1, 3, 5, 6, 3, 9, 0, 5, 12,15};
  printf("Array Length: %d \n", LENGTH);
  print_array(a);
  return 0;
}

void print_array(int *array) {
  for (int i = 0; i < LENGTH; i++) {
    printf("Array[%d] = %d\n", i, array[i]);
  }
}