#include <stdio.h>
#include <conio.h>

int main(void) {
	int matriz[30][30];
	int l=0;
	int c;
	int s;
	
	for(l = 0; l < 30; l++) {
		for(c = 0; c < 30; c++) {
			printf("Digite um valor para a linha %d coluna %d: \n", l+1,c+1);
			scanf("%d", &matriz[l][c]);
		}
	}
	
	for(c=0; c < 30; c++) {
		s=matriz[0][c];
		printf("Soma da coluna %d: %d \n", c, s);
	}
	
}
