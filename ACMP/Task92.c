#include <stdio.h>

int main(){
    int s;
    scanf("%d", &s);

    int c = s / 6;
    int a = s / 6;
    int b = (2 * s) / 3;

    printf("%d %d %d", a, b, c);
    return 0;
}
