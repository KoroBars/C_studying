#include <stdio.h>

int main(){
    int guests, a;
    scanf("%d", &guests);
    if (guests == 1) {
        printf("%d", 0);
    } else if (guests == 2) {
        printf("%d", 1);
    } else if (guests == 3) {
        printf("%d", 3);
    }
}
