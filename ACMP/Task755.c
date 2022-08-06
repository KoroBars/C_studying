#include <stdio.h>

int main(){
    int collected1, collected2, eaten;
    scanf("%d %d %d", &collected1, &collected2, &eaten);
    int collected_total = collected1 + collected2;
    if (collected_total >= eaten) {
        printf("%d", collected_total - eaten);
    } else {
        printf("Impossible");
    }
}
