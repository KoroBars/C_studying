#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n * 2; i += 2) {
        printf("%d", i);
        if (i + 2 <= n * 2) {
            printf(" ");
        }
    }
    return 0;
}
