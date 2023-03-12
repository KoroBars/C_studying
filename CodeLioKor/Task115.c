// Вводится число n. Вывести все числа из интервала [1, n]. Каждое число выводить с новой строки.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
}
