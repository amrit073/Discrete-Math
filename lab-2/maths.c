#include <math.h>
#include <stdio.h>

int main() {
  float n;
  printf("enter a floating point number ");
  scanf("%f", &n);
  printf("celling is: %d and floor is : %d\n", (int)ceil(n), (int)floor(n));
}
