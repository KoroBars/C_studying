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

// todo: Implement is_even function and cover with unit tests.

int main(){
    assert(is_odd(27) == true);
    assert(is_odd(30) == false);
    assert(is_odd(0) == false);
    assert(is_odd(-26) == false);
    assert(is_odd(-27) == true);
}