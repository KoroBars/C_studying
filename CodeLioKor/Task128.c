/* Вводится число. Вывести его цифры. Каждую цифру выводить с новой строки.

Особые указания:

Для отрицательных чисел - выводить цифры без знака "минус". */

#include <stdio.h>
int main () {
    int n;
    int i = 0;
    scanf("%d", &n);
    int arr[10];

    if (n == 0) {
        printf("%d", 0);
    }

    while ((n > 0) || (n < 0)){
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        if (arr[j] < 0){
            printf("%d\n", -(arr[j]));
        } else {
            printf("%d\n", arr[j]);
        }
    }

    return 0;
}
