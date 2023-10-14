#include <stdio.h>

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

int main() {

    const int size = 8;
    int arr_of_birthdays[] = {26, 31, 18, 19, 23, 15, 23, 31};

    int arr_of_birthdays_2[size * 2];
    for (int i = 0; i < size; i++) {
        arr_of_birthdays_2[i] = arr_of_birthdays[i];
    }
    for (int i = size; i < size * 2; i++ ) {
        arr_of_birthdays_2[i] = arr_of_birthdays[i - size];
    }

    int arr_of_birthdays_3[size * 3];
    for (int i = 0; i < size; i++) {
        arr_of_birthdays_3[i] = arr_of_birthdays[i];
    }
    for (int i = size; i < size * 2; i++) {
        arr_of_birthdays_3[i] = arr_of_birthdays[i - size];
    }
    for (int i = size * 2; i < size * 3; i++) {
        arr_of_birthdays_3[i] = arr_of_birthdays[i - size * 2];
    }



    print_arr(size, arr_of_birthdays);
    printf("\n");
    print_arr(size * 2, arr_of_birthdays_2);
    printf("\n");
    print_arr(size * 3, arr_of_birthdays_3);
}