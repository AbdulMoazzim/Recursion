#include <stdio.h>

int fibonacci(int n);
int main() {
      int n, fib;
      printf("Enter the number of terms of fibonacci series for summing! ");
      scanf("%d", &n);
      fib = fibonacci(n);
      printf("Sum of fibonacci series for %dth terms is %d\n",n ,fib);
      return 0;
}

int fibonacci(int n) {
      if (n == 0) {
            return 0;
      } 
      if (n == 1) {
            return 1;
      }
      return fibonacci(n -1) + fibonacci(n -2);
}