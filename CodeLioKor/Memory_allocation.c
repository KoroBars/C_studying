#include <stdlib.h>

int main() {
    long long size_gb = 8;
    long long size = size_gb * 1073741824;
    while (size > 0) {
        malloc(16000000);
        size -= 16000000;
    }
    while (1) {};
}