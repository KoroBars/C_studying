#include <stdio.h>

int main() {
    int a, b, res1, res2, res3, res4, overall;
    scanf("%d %d", &a, &b);
    res1 = a - b;
    scanf("%d %d", &a, &b);
    res2 = a - b;
    scanf("%d %d", &a, &b);
    res3 = a - b;
    scanf("%d %d", &a, &b);
    res4 = a - b;
    overall = res1 + res2 + res3 + res4;
//    printf("%d \n", overall);
    if (overall > 0) {
        printf("1");
    } else if (overall < 0) {
        printf("2");
    } else {
        printf("DRAW");
    }
    return 0;
}
