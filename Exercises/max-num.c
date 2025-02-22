#include <stdio.h>

int main(void) {
  int var1 = 0, var2 = 0, var3 = 0;
  int max = 0;

  printf("Enter the three num: ");
  scanf("%d %d %d", &var1, &var2, &var3);

  if (var1 > var2 && var1 > var3) {
    max = var1;
  }

  else if (var2 > var3 && var2 > var1) {
    max = var2;
  }
  else {
    max = var3;
  }
  printf("Max: %d\n", max);

  return 0;
}
