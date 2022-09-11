#include <stdio.h>

int main(){
    int n;
    int max;
    scanf("%d", &n);
    if (n <= 0){
        return 0;
    }
    scanf("%d", &max);
    int index = 0;
    int arr[n];

    for (int i = 1; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] >= max){
            max = arr[i];
            index = i;
        }
    }

    printf("%d %d", index, max);
    return 1;
}
