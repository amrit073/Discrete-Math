#include <stdio.h>

struct ele {
  int x;
  float y;
};

void findUnion(struct ele a[], struct ele b[]) {
  printf("union is : ");
  for (int i = 0; i < 3; i++) {
    float great = a[i].y > b[i].y ? a[i].y : b[i].y;
    printf("(%d , %f) ", a[i].x, great);
  }
}
void findInter(struct ele a[], struct ele b[]) {
  printf("\nintersection is : ");
  for (int i = 0; i < 3; i++) {
    float low = a[i].y < b[i].y ? a[i].y : b[i].y;
    printf("(%d , %f) ", a[i].x, low);
  }
}
void complement(struct ele a[]) {
  printf("\ncomplement is : ");
  for (int i = 0; i < 3; i++) {
    printf("(%d, %f)", a[i].x, 1 - a[i].y);
  }
}
int main() {
  struct ele a[3], b[3];
  printf("enter elements for setA ");
  for (int i = 0; i < 3; i++) {
    scanf("%d%f", &a[i].x, &a[i].y);
  }
  printf("enter elements for setB ");
  for (int i = 0; i < 3; i++) {
    scanf("%d%f", &b[i].x, &b[i].y);
  }
  findUnion(a, b);
  findInter(a, b);
  complement(a);
  printf("\n");
}
