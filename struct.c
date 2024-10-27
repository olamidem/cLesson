#include <stdio.h>
struct Student {
  char name[50];
  char id[10];
  int age;
  int grade[5];
};
int main() {
  printf("Struct\n");
  struct Student kelvin;
  kelvin.age = 50;

  printf("Age: %d\n", kelvin.age);
  return 0;
}
