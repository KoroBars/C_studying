// Вводится целые числа a и b. Вывести все числа из интервала [a; b] через пробел.
// Пробел после последнего числа не ставить!
#include "stdio.h"

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++){
        if (i == b) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }
}
