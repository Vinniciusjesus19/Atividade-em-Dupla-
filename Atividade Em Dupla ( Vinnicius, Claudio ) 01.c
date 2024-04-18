#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale (LC_ALL,"");
    char disciplinas[3][50];
    float notas[3][3];
    int pesos[3][3];
    float medias[3];
    int m,j;

    printf("Digite o nome da disciplinas:\n");
    for (m = 0; m < 3; m++) {
        printf("Nome da disciplina %d: ", m + 1);
        scanf("%s", disciplinas[m]);
    }
    for (m = 0; m < 3; m++) {
        printf("\nDisciplina: %s\n", disciplinas[m]);
        for (j = 0; j < 3; j++) {
            printf("%da nota: ", j + 1);
            scanf("%f", &notas[m][j]);
            printf("Peso da %da nota: ", j + 1);
            scanf("%d", &pesos[m][j]);
        }
    }
    for (m = 0; m < 3; m++) {
        float soma_notas = 0;
        int soma_pesos = 0;
        for (j = 0; j < 3; j++) {
            soma_notas += notas[m][j] * pesos[m][j];
            soma_pesos += pesos[m][j];
        }
        medias[m] = soma_notas / soma_pesos;
    }

    printf("\nMédias Ponderadas:\n");
    for (m = 0; m < 3; m++) {
        printf("%s: %.2f\n", disciplinas[m], medias[m]);
    }

    return 0;
}
