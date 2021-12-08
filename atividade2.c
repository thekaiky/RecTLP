#include <stdio.h>
#include <conio.h>

void main() {
    int vetorA[15];
    int indiceA;

    for(indiceA = 0; indiceA < 15; indiceA++) {
        printf("Digite um num para o vetor A: \n");
        scanf("%d", &vetorA[indiceA]);
    }
    
    for(indiceA = 0; indiceA < 15; indiceA++) {
    	if(vetorA[indiceA] == 10) {
    		printf("O num 10 apareceu! \n");
		}
		if(vetorA[indiceA] < 50) {
    		printf("O num eh menor que 50! \n");
		}
    }
	
}
