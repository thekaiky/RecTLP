#include <stdio.h>
#include <conio.h>

void main() {
    int vetor[50];
    int indice=0;
    int menor = indice[0];
    int maior = indice[1];
    
    for(indice = 0; indice < 50; indice++) {
        printf("Digite os valores do vetor A: \n");
        scanf("%d", &vetor[indice]);
    }

    for(indice = 0; indice < 50; indice++) {
        if(a[indiceA] > maior)
            maior = vetor[indice];
    }

    for(indice = 0; indice < 50; indice {
        if(vetor[indiceA] < menor) {
            menor = vetor[indice];
        }
    }

    printf("Menor: %d \n", menor);
    printf("Maior: %d \n", maior);

}
