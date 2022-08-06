#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers: a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    if (a == 0) {
        printf("ERROR: It's not a square equation!!!");
        return 0;
    }

    int discriminant;
    discriminant = b * b - 4 * a * c;
    printf("Discriminant is %d\n", discriminant);
    if (discriminant < 0) {
        printf ("Answer: No roots\n");
    } else if (discriminant > 0) {
        double d = sqrt(discriminant);
        printf("The root of the discriminant is %f\n", d);
        double x1, x2;
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        printf("Answer is %f\n", x1);
        printf("Answer is %f\n", x2);
    } else {
        double x3;
        x3 = ((double)(-b) / (2 * a));
        printf("Answer is %f\n", x3);
    }

    printf("\nThank you for using this app :)\n");

    return 0;
}
