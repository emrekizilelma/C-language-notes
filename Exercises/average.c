#include <stdio.h>

int main(void) {
  int n = 0, sum = 0, num = 0;

  printf("Enter the n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("Enter the %d. number: ", i);
    scanf("%d", &num);

    sum = sum + num;
  }

  float average = (float) sum / (float) n;

  printf("Average is: %.2f\n", average);

  return 0;
}
