#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {

  char s[] = "aurhUIHUEHwueoijWUURrkfcdsdnssyaeoicnsdij";
  int length = strlen(s);

  int a = 0;
  int vowel = 0;
  int rem = 0;

  for (int i = 0; i < length; i++) {

    switch (toupper(s[i])) {
    case 'A':
      a++;
      break;
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowel++;
      break;
    default:
      rem++;
      break;
    }
  }

  printf("A:%d B:%d\n", a, vowel);
  printf("Rem:%d \n", rem);
  printf("%d\n", length);

  return 0;
}