#include <stdio.h>
#include <assert.h>

int sum_arr(const int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
       result += arr[i];
    }
    return result;
}

int main(){
    int test_arr[] = {26, 31, 15, 23, 0, -26, 19};
    assert(sum_arr(test_arr, 7) == 88);
    // Checking that test_arr wasn't changed
    assert(sum_arr(test_arr, 7) == 88);
    assert(sum_arr(test_arr, 3) == 72);
    assert(sum_arr(test_arr, 0) == 0);

    // todo: Handle wrong size

    printf("Enter your amount of numbers:\n");
    int size = 0;
    scanf("%d", &size);

    int arr[size];
    printf("Enter your %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sum_arr(arr, size);
    printf("Sum of your numbers is:\n%d\n", result);

    return 0;
}
