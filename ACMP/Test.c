#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int digit;
        scanf("%d", &digit);
        printf("%d", digit);
    }
    return 0;
}
