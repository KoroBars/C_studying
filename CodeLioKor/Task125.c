// Вводится число n. Далее вводятся n чисел. Вывести эту последовательность в обратном порядке, отделив запятой и пробелом.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int index = n - 1;

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = index; i >= 0; i--){
        if (i > 0) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    return 0;
}
