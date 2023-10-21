#include <stdio.h>
#include <stdbool.h>

void print_arr (int size, int arr[]) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}");
}

void print_arr_reverse(int size, int arr[]) {
    printf("{");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("}");
}

int min_el_of_arr(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        bool el_with_index_i_is_minimum = true;
        for (int j = 0; j < size; j++) {
            if (arr[j] < arr[i]) {
                el_with_index_i_is_minimum = false;
            }
        }
        if (el_with_index_i_is_minimum == true) {
            return arr[i];
        }
    }
}

// 1. Записать 1 элемент массива как минимальный. 2. Далее сравниваем каждый элемент массива с минимальным. 3. Если
// в массиве присутствует такой элемент, который меньше минимального, то такой элемент считается новым минимальным значением.

int min_el_of_arr_optimal(int size, int arr[]) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {

    const int size = 8;
    int arr_of_birthdays[] = {26, 31, 18, 19, 23, 15, 23, 31};

    int min = min_el_of_arr(size, arr_of_birthdays);
    int min_optimal = min_el_of_arr_optimal(size, arr_of_birthdays);
    printf("%d %d\n", min, min_optimal);

    int arr_size = 5;
    int arr[] = {5, 5, 5, 5, 5};
    int min_2 = min_el_of_arr(arr_size, arr);
    int min_2_optimal = min_el_of_arr_optimal(arr_size, arr);
    printf("%d %d\n", min_2, min_2_optimal);

    printf("\n");

    int arr_of_birthdays_2[size * 2];
    for (int i = 0; i < size * 2; i++) {
        int j = i % size;
        arr_of_birthdays_2[i] = arr_of_birthdays[j];
    }

    int arr_of_birthdays_3[size * 3];
    for (int i = 0; i < size * 3; i++) {
        int j = i % size;
        arr_of_birthdays_3[i] = arr_of_birthdays[j];
    }

    print_arr(size, arr_of_birthdays);
    printf("\n");
    print_arr(size * 2, arr_of_birthdays_2);
    printf("\n");
    print_arr(size * 3, arr_of_birthdays_3);
    printf("\n");

    printf("\n");

    print_arr_reverse(size, arr_of_birthdays);
    printf("\n");
    print_arr_reverse(size * 2, arr_of_birthdays_2);
    printf("\n");
    print_arr_reverse(size * 3, arr_of_birthdays_3);
    printf("\n");

    return 0;
}
