#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = a; i <= b; i += c) {
        printf("%d", i);
        if (i + c <= b) {
            printf(" ");
        }
    }
    return 0;
}
