#include <stdio.h>

int main() {
    int num1, num2, dif;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    dif = num1 - num2;

    printf("The dif of %d and %d is **%d**.\n", num1, num2, dif);

    return 0;
}

