#include <stdio.h>

int factorial(int n);
int main() {
      int n, fac;
      printf("Enter the number of terms for factorial! ");
      scanf("%d", &n);
      fac = factorial(n);
      printf("Factorial for %dth terms is %d\n",n ,fac);
      return 0;
}

int factorial(int n) {
      if (n == 0) {
            return 1;
      }
      return n * factorial(n - 1);
}