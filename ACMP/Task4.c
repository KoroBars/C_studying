#include <stdio.h>

int main(){
    int k;
    scanf("%d", &k);
    int a = 9;
    int c = a - k;
    int result = k * 100 + a * 10 + c * 1;
    printf("%d", result);
}
