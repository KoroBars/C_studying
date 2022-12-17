#include <stdio.h>

int main(){
    int a = 2;
    int b = (a++ * 3) + 4;
    printf("%d %d\n", a, b); // 3 10

    int c = 10;
    int d = (--c * 3 + 5 * 9) * 3;
    printf("%d %d\n", c, d); // 9 216

    int e = 5;
    int f = (--e + 5) * (e++ + e++ - --e);
    // (4 + 5) * (4 + 5 - 5) = 36
    printf("%d %d\n", e, f); // 5 36

    int g = 2;
    int k = g++ + 1 - --g + --g + ++g + 2 * ++g + 3 * (1 + ++g);
    // 2 + 1 - 2 + 1 + 2 + (2 * 3) + (3 * (1 + 4)) = 4 + 6 + 15 = 25
    printf("%d %d\n", g, k); // 4 25

    return 0;
}
