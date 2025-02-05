#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %.2lf and %.2lf\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Root is %.2lf\n", root1);
    } else {
        printf("No real roots\n");
    }

    return 0;
}
