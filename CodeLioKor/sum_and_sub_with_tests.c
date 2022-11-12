#include <stdio.h>
#include <assert.h>

int sum(int a, int b, int c){
    int result = a + b + c;
    return result;
}

int sub(int a, int b, int c) {
    return a - b - c;
}

int main(){
    assert(sum(27, 2, 3) == 32);
    assert(sum(-2, -26, 3) == -25);
    assert(sum(1000000, 256674, 32057) == 1288731);
    assert(sum(0, 2, 3) == 5);

    assert(sub(27, 2, 3) == 22);
    assert(sub(0, 2, 3) == -5);

    printf("Success, all unit tests have passed\n");
}
