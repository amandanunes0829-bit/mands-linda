#include <stdio.h>

int main() {
    double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    scanf("%lf %lf %lf", &A, &B, &C);

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = ((A + B) * C) / 2.0;

    printf("QUADRADO = %.4lf\n", areaQuadrado);
    printf("TRIANGULO = %.4lf\n", areaTriangulo);
    printf("TRAPEZIO = %.4lf\n", areaTrapezio);
    return 0;
}
