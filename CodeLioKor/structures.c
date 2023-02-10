#include <stdio.h>

// Написать функцию, которая копирует одну строку в другую.
void copy_str(char s_from[], char s_dest[]) {
    int i = 0;
    while (s_from[i] != '\0') {
        s_dest[i] = s_from[i];
        i += 1;
    }
    s_dest[i] = '\0';
}


struct Ball {
    int size;
    char colour[20];
    int weight; // г
    char brand[15];
};

int main() {
    struct Ball ball_1, ball_2;
    ball_1.size = 5;
    ball_1.weight = 400;
    copy_str("black_and_white", ball_1.colour);
    copy_str("Adidas", ball_1.brand);
    printf("size = %d, colour = %s, weight = %d, brand = %s\n", ball_1.size, ball_1.colour, ball_1.weight, ball_1.brand);
    return 0;
}