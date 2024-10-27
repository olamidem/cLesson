#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  printf("Hello world \n");

  // check

  int x = 2;

  if (x == 2) {
    printf("x is equal to 2 \n");
  }

  char s[] = "aabcdAfPghijjhkEUAGHJWlnjuohanazqwueioz";

  int length = strlen(s);

  int a = 0;
  int vowel = 0;

  for (int i = 0; i < length; i++) {

    switch (toupper(s[i])) {

    case 'A':
      a++;

    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowel++;
    }

    
  }
  printf("a: %d vowel: %d \n", a, vowel);

  // for (int i=0; s[i]; i++) {
  //   printf("%c\n",s[i]);
  // }
  
  return 0;
}