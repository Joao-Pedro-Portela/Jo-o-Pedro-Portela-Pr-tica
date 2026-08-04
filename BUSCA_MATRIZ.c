#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, j, num;
    int mat[3][3];           
    int achou = 0;

    // Leitura da matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Número a ser procurado
    printf("Qual número você deseja encontrar? ");
    scanf("%d", &num);

    // Procura o número
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(num == mat[i][j]){
                printf("\nNúmero encontrado!\n");
                printf("Linha: %d\n", i);
                printf("Coluna: %d\n", j);
                achou = 1;
            }
        }
    }

    // Caso não encontre
    if(achou == 0){
        printf("\nNúmero não encontrado!\n");
    }

    return 0;
}
