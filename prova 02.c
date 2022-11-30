#include <stdio.h>

// O vetor é definido com 10 posições.

#define tamanho 10

// Função ordenadora dos valores digitados.
// A função seguinte tem o objetivo de alocar temporariamente o valor de entrada até não restar números maiores que ele.
// Os valores são então ordenados em ordem crescente.
// O laço for vai passar todos os valores digitados e compará-los.
// Os valores serão armazenados na variável temporária até que se compare esses valores e eles sejam oredenados.
// A bubblesort percorrerá o vetor várias vezes para sempre mandar o maior valor para o começo da sequência.

void bubblesort(int* vetor, int n) {
	int i, j, temporario;
	for (i = n-1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j+1]) {
				temporario = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temporario;
			}
		}
	}
}

// Principal função, que irá dar os 10 valores em ordem aleatória.
// O laço for passará os valores dados para serem ordenados em ordem crescente.

int main() {
	int vet[tamanho] = {20,11,22,14,77,2,10,5,4,7};
	int i;
	bubblesort(vet,tamanho);
	for (i = 0; i < tamanho; i++) {
		printf("%d ", vet[i]);
	}
	return(0);
}
