#include <stdio.h>
int main() {
  int a[5] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 5}, n1, n2;
  printf("{");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf(" (%d,  %d), ", a[i], b[j]);
    }
  }
  printf("}\n");
  return 0;
}
