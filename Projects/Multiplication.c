#include "stdio.h"

int main() {
    printf("Enter your number:");
    int number;
    scanf("%d", &number);

    if (number >= 10){
        printf("ERROR");
        return 0;
    } else if (number < 0){
        printf("ERROR");
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        int result = number * i;
        printf( "%d * %d = %d\n", number, i, result);
    }

    return 0;
}
