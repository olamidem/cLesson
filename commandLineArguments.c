#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  printf("argc: %d\n", argc);
  printf("argv[0] = %s\n", argv[0]);
  printf("argv[1] = %s\n", argv[1]);

  for (int i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }

  int lower = atoi(argv[1]);
  int higher = atoi(argv[2]);
  for (int i = lower; i <= higher; i++) {
    printf("%d\n\n", i);
  }
  return 0;
}