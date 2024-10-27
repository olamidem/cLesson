#include <stdio.h>

int main() {

  int i = 0;

  do {
    printf("i:%d\n\n", i);
    i++;
  } while (i < 5);

  printf("do while loop\n");
  return 0;
}