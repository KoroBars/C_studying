// Вводится число n. Далее вводятся n чисел. Вывести эту последовательность в обратном порядке, отделив запятой и пробелом.

#include <stdio.h>

void print_arr(int arr[], int length) {
    printf("{");
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

void read_arr(int arr[], int length) {
    for (int i = 0; i < length; i++){
//        scanf("%d", &arr[i]);
        int number;
        scanf("%d", &number);
        arr[i] = number;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    read_arr(arr, n);
    print_arr(arr, n);
}
