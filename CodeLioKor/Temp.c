// Write a function that returns last digit of a given number and cover with unit tests

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int get_last_digit(int number){
    int digit = number % 10;
    if (digit < 0) {
        digit = -(digit);
    }
    return digit;

    // alternative function: return abs(number) % 10;
}

int main(){

    printf("%d\n", get_last_digit(-26));

    assert(get_last_digit(26) == 6);
    assert(get_last_digit(0) == 0);
    assert(get_last_digit(-26) == 6);
    assert(get_last_digit(150391) == 1);
    assert(get_last_digit(-158329) == 9);
    assert(get_last_digit(5) == 5);
    assert(get_last_digit(-7) == 7);
    assert(get_last_digit(-20) == 0);
}
