#include <stdio.h>

int main() {

  /*
     working with array.
    Array simply is the collection of data of the same data type
    */

  int grade[6] = {32, 56, 74, 93, 21, 46};
  //   grade[0] = 19,
  //   grade[1] = 96,
  //   grade[2] = 82,
  //   grade[3] = 57,
  //   grade[4] = 63,
  //   grade[5] = 60,
  int count = 0;
  for (int i = 0; i < 6; i++) {
    count++;
    printf("grade[%d] = %d\n", i, grade[i]);
  }
  printf("%d\n", count);

  return 0;
}