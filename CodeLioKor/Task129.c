#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int max;
    scanf("%d", &max);

    for (int i = 0; i < n - 1; i++){
        int digit;
        scanf("%d", &digit);
        if (digit > max){
            max = digit;
        }
    }
    printf("%d", max);
    return 0;
}
