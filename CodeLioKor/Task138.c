// Вводится число n. Далее вводится n целых чисел. Посчитать, сколько среди этих чисел двоек и вывести их число.

#include <stdio.h>

void read_arr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
}

int count_number_two(const int arr[], int length) {
    int counter = 0;
    for (int i = counter; i < length; i++) {
        if (arr[i] == 2) {
            counter += 1;
        }
    }
    return counter;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    read_arr(arr, n);

    int result = count_number_two(arr, n);
    printf("%d", result);

    return 0;
}

// todo: Use dynamic arrays instead of static;