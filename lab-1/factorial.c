#include <stdio.h>

int fact(int i) { return (i == 0) ? (1) : i * fact(i - 1); }

int main() {
  int n printf("enter number to find factorial ");
  scanf("%d", &n);
  printf("factorial id: %d\n", fact(n));
}
