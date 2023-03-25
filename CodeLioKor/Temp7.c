// Вводится число n. Далее вводится n целых чисел. Посчитать, сколько среди этих чисел двоек и троек, и вывести их число.

#include <stdio.h>

struct CountResult {
    int amount_2;
    int amount_3;
};

void read_arr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
}

struct CountResult count_number_two_and_three(const int arr[], int length) {
    struct CountResult count_result;
    count_result.amount_2 = 0;
    count_result.amount_3 = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] == 2) {
            count_result.amount_2 += 1;
        }
        if (arr[i] == 3) {
            count_result.amount_3 += 1;
        }
    }
    return count_result;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    read_arr(arr, n);

    struct CountResult count_result = count_number_two_and_three(arr, n);
    printf("%d\n%d\n", count_result.amount_2, count_result.amount_3);

    return 0;
}
