// Вводится число n. Если n нечетное - вывести n слов "LION", а если четное - в 2 раза больше слов "WOLF".
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (int i = 0; i < n * 2; i++) {
            printf("WOLF\n");
        }
    } else if (n % 2 == 1) {
        for (int i = 0; i < n; i++) {
            printf ("LION\n");
        }
    }
}
