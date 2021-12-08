#include <stdio.h>
#include <conio.h>

void main() {
    int vetorA[20];
    int vetorB[20];
    int indiceA;
    int indiceB;
    int indiceC;
    int c;

    for(indiceA = 0; indiceA < 20; indiceA++) {
        printf("Digite um num para o vetor A: \n");
        scanf("%d", &vetorA[indiceA]);
    }
    
    for(indiceB = 0; indiceB < 20; indiceB++) {
        printf("Digite um num para o vetor B: \n");
        scanf("%d", &vetorB[indiceB]);
        c = c+vetorA[indiceA]+vetorB[indiceB];
	}
	
	printf("A soma do vetor C eh: %d", c);
}
