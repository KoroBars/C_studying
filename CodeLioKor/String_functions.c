#include <stdio.h>
#include <assert.h>

int length_str(const char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i += 1;
    }
    return i;
}

// todo: Write a function that counts letter 'm' in the string and cover it with unit tests.

int main() {
    assert(length_str("wolf") == 4);
    assert(length_str("Monkey") == 6);
    assert(length_str("") == 0);
    assert(length_str("PUMBA") == 5);
    assert(length_str("wolf123!") == 8);
    assert(length_str("wolf and lion") == 13);

    printf("%d", length_str("Pumba"));
}
