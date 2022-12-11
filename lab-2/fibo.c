#include <stdio.h>

int fibo(int n) { return n < 2 ? n : fibo(n - 1) + fibo(n - 2); }

int main() {
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("%d ", fibo(i));
  }
  printf("\n");
}
