#include <stdio.h>

// function that call itself
/*
    A good example for this is factorial
    A factorial of n denoted by n!
    is the product of all the positive integers <=n
    n! = n * (n-1) * (n-2) ......* 1
    Recursion is a way of solving a problem
    where solution depends on solutions to smaller instance.
*/

int main() {
  // Recursive solution
  int factorial(int n);

  // example one with normal way without recursion
  int n = 0;
  int fact = 1;
  printf("Enter a number! \n");
  scanf("%d", &n);
  //   while (n >= 1) {
  //     fact = n * fact;
  //     n--;
  //   }
  fact = factorial(n);
  printf("%d\n", fact);
  return 0;
}

int factorial(int n) {
  if (n == 1)
    return 1;
  return n * factorial(n - 1);
}