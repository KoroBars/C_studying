// Вводится число n. Далее вводятся n чисел. Вывести эту последовательность в обратном порядке, отделив запятой и пробелом.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    return 0;
}
