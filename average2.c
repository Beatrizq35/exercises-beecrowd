#include <stdio.h>

int main () {
    float num1, num2, num3, media;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;

    printf("MEDIA = %.1f\n", media);

}