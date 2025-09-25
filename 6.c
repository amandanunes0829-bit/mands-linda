#include <stdio.h>

int main() {
    double r, area;
    const double PI = 3.14159;
    scanf("%lf", &r);

    area = PI * r * r;
    printf("AREA = %.3lf\n", area);
    return 0;
}
