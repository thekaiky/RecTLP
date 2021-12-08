#include <stdio.h>
#include <conio.h>

void main() {
    int vetorA[15];
    int indiceA;
    int numPesquisa = 20;

    for(indiceA = 0; indiceA < 15; indiceA++) {
        printf("Digite um num para o vetor A: \n");
        scanf("%d", &vetorA[indiceA]);
    }
    
    for(indiceA = 0; indiceA < 15; indiceA++) {
    	if(vetorA[indiceA] == numPesquisa) {
    		printf("O num 20 foi encontrado em %d! \n", indiceA+1);
		}
    }
	
}
