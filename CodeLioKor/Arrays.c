#include <stdio.h>
#include <stdbool.h>

// №1 Написать функцию, которая принимает на вход массив целых чисел, его длину и целое число, а затем проверяет,
// содержит ли массив это число.
bool array_has_number(const int arr[], int length, int number) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

// №2 Написать функцию, которая получает на вход массив и его длину, а затем считает сумму элементов массива.
int sum_elements_of_array(const int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

// №3 Написать функцию, которая получает на вход массив, его длину и число, а затем считает, сколько раз это число
// встречается в массиве
int count_how_many_times_number_occurred(const int arr[], int length, int number) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] == number) {
            sum = sum + 1;
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 26, 0, 4, -5, 1};
    bool result_1 = array_has_number(arr, 6, 26);
    printf("Answer #1: %d\n", result_1);

    int result_2 = sum_elements_of_array(arr, 6);
    printf("Answer #2: %d\n", result_2);

    int result_3 = count_how_many_times_number_occurred(arr, 6, -5);
    printf("Answer #3: %d\n", result_3);
}
