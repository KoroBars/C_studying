#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool is_odd(int a) {
//    if (a < 0 && a % 2 == -1){
//        return true;
//    }
    if (a % 2 == 0) {
        return false;
    } else {
        return true;
    }
}


bool is_even(int a) {
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    // for bool is_odd
    printf("Testing is_odd...\n");
    assert(is_odd(27) == true);
    assert(is_odd(30) == false);
    assert(is_odd(0) == false);
    assert(is_odd(-26) == false);
    assert(is_odd(-27) == true);

    // for bool is_even
    printf("Testing is_even...\n");
    assert(is_even(28) == true);
    assert(is_even(27) == false);
    assert(is_even(0) == true);
    assert(is_even(-28) == true);
    assert(is_even(-27) == false);

    printf("Testing completed\n");
    return 0;
}