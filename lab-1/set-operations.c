#include <stdio.h>

void findUnion(int arr1[], int arr2[]) {
  int i = 0, j = 0;
  printf("union is : ");
  while (i < 5 && j < 5) {
    if (arr1[i] < arr2[j]) {
      printf("%d ", arr1[i]);
      i++;
    } else if (arr1[i] > arr2[j]) {
      printf("%d ", arr2[j]);
      j++;
    } else {
      printf("%d ", arr2[j]);
      i++, j++;
    }
  }
  while (i < 5) {
    printf("%d ", arr1[i++]);
  }
  while (j < 5) {
    printf("%d ", arr2[j++]);
  }
  printf("\n");
}

void findIntersection(int arr1[], int arr2[]) {
  int i = 0, j = 0;
  printf("intersection is : ");
  while (i < 5 && j < 5) {
    if (arr1[i] < arr2[j]) {
      i++;
    } else if (arr1[i] > arr2[j]) {
      j++;
    } else {
      printf("%d ", arr2[j]);
      i++, j++;
    }
  }
  printf("\n");
}

void complement(int a[]) {
  int u[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i, n;
  printf("complement is : ");
  for (i = 0; i < 9; i++) {
    if (a[i] != u[i]) {
      printf("%d ", u[i]);
    }
  }
  printf("\n");
}

void difference(int arr1[], int arr2[]) {
  int i = 0, j = 0;
  printf("difference is : ");
  while (i < 5 && j < 5) {
    if (arr1[i] < arr2[j]) {
      printf("%d ", arr1[i]);
      i++;
    } else if (arr1[i] > arr2[j]) {
      j++;
    } else {
      i++, j++;
    }
  }
  printf("\n");
}

int main() {
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {2, 3, 5, 7, 8};
  findUnion(arr1, arr2);
  findIntersection(arr1, arr2);
  complement(arr1);
  difference(arr1, arr2);
}
