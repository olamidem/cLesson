#include <stdio.h>
#include <string.h>

int main() {

  char text[] = "Some string!!!!";
  int length = strlen(text);
  int count_s = 0;
  printf("Length of the sting is %d \n", length);

  for (int i = 0; i < length; i++) {
    if (text[i] == 's' || text[i] == 'S') {
      count_s++;
    }
  }
  printf("count of s = %d \n", count_s);
  printf("do while loop\n");
  return 0;
}