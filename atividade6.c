#include <stdio.h>
#include <conio.h>

int main(void) {
	int matriz[30][30];
	int l;
	int c;
	int s=0;
	
	for(l = 0; l < 30; l++) {
		for(c = 0; c < 30; c++) {
			printf("Digite um valor para a linha %d coluna %d: \n", l+1,c+1);
			scanf("%d", &matriz[l][c]);
		}
	}
	
	for(c = 0; c < 30; c++) {
		for(l = 0; l < 30; l++) {
			s = s+matriz[l][c]/2;
		}
	}
	printf("Media dos valores: %d", s);
}
