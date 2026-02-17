#include <stdio.h>

int diferenca (int num1, int num2, int num3, int num4) {

    int dif;

    dif = (num1 * num2) - (num3 * num4);
    return dif;
}

int main () {
    int num1, num2, num3, num4;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    printf("DIFERENCA = %d\n", diferenca(num1, num2, num3, num4));

    return 0;
}