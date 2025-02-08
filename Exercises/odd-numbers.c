#include <stdio.h>

int main(void) {
  int sum = 0, input = 0;
  
  printf("Enter the number: ");
  scanf("%d", &input);

  for(int i = 1; i <= input; i++) {
    if(i % 2 != 0) {
        sum = sum + i;
    }
  }

  printf("Sum: %d\n", sum);
  
  return 0;
}
