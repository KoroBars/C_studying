#include <stdio.h>
#include <stdbool.h>

void read_and_print_reverse(int n, bool print_space) {
    if (n <= 0) {
        return;
    }
    int number;
    scanf("%d", &number);
    read_and_print_reverse(n - 1, true);
    printf("%d", number);
    if (print_space == true) {
        printf(", ");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    read_and_print_reverse(n, false);
}
