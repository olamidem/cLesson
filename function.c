#include <stdio.h>

int add(int a, int b);

int main() {

  printf("Hello\n");
  int printResult = add(2, 3);

  printf("%d\n", printResult);

  return 0;
}

int add(int a, int b) {
  int result = a + b;
  return result;
}