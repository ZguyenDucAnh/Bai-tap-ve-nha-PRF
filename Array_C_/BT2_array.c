#include <stdio.h>

int isPerfectNumber(int n) {
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }
  return sum == n;
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  printf("The array is: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  int totalPerfectNumber = 0;
  for (int i = 0; i < size; i++) {
    if (isPerfectNumber(array[i])) {
      totalPerfectNumber++;
    }
  }

  printf("The total perfect number in the array is: %d\n", totalPerfectNumber);

  return 0;
}
