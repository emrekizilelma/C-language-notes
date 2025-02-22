#include <stdio.h>

int main(void) {
    int input = 0, num = 0, max = 0;

    printf("Enter the n: ");
    scanf("%d", &input);

    printf("Enter the 1. number: ");
    scanf("%d", &max);  // İlk sayıyı al ve max olarak ayarla

    for (int i = 1; i < input; i++) {  // Döngü 1'den başlasın
        printf("Enter the %d. number: ", i + 1);
        scanf("%d", &num);  // Yeni sayıyı al

        if (num > max) {  // Eğer yeni sayı daha büyükse
            max = num;  // Max'ı güncelle
        }
    }

    printf("Max: %d\n", max);  // En büyük sayıyı yazdır

    return 0;
}
