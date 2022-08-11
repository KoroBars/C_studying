#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    int min;
    scanf("%d", &min);

    for (int i = 0; i < n - 1; i++){
        int digit;
        scanf("%d", &digit);
        if (abs(digit) < abs(min)) {
            min = digit;
        } else if (digit < min && abs(digit) == abs(min)) {
            min = digit;
        }
    }
    printf("%d", min);

    return 0;
}
