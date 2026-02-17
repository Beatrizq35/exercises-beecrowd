#include <stdio.h>

int main () {

    float num1, num2, media;

    scanf("%f", &num1);
    scanf("%f", &num2);
    media = (num1 * 3.5 + num2 * 7.5) / 11.0;

    printf("MEDIA = %.5f\n", media);
    return 0;
}