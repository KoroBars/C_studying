#include <stdio.h>
#include <math.h>

int main(){
    int n, a;
    scanf("%d", &n);
    n = abs(n);

    int result = 0;

    while (n > 0){
        a = n % 10;
        result += a;
        n /= 10;
    }

    printf("%d", result);

    return 0;
}
