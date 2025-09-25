#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    scanf("%s %d", nome1, &idade1);
    scanf("%s %d", nome2, &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s eh de %.1lf anos\n", nome1, nome2, media);
    return 0;
}
