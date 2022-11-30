#include <stdio.h>
#include <stdlib.h>

// Define o vetor com o máximo de 10 posições
#define VETOR 10

// Função ordenadora do vetor
void insertion_sort(int *a);

// Principal função do código
int main(int argc, char** argv)
{
    int i, vet[VETOR];

     // Lê os 10 valores digitados e os armazena em ordem de digitação.
     // Enquanto o contador i for menor que 10, o laço for continua
     // pedindo ao usuário mais números para armazenar no vetor até completar as 10 entradas.
     
    for(i = 0; i < VETOR; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    // Ordena em ordem crescente os 10 valores de entrada na seguinte função.
    
    insertion_sort(vet);

    // A seguinte função vai imprimir os 10 valores de entrada na tela em ordem crescente.
    // Essa função ficará para o laço for.
    // A função do contador i será implementar em mais uma unidade, enquanto for menor que 10,
    // passando para próxima posição da sequência.
    
    printf("\nValores ordenados em ordem crescente:\n");
    
    for(i = 0; i < VETOR; i++)
    {
        printf("%d ", vet[i]);
    }
    system("pause");
    return 0;
}

// A próxima função tem o objetivo de gravar temporariamente o valor digitado pelo usuário até não restar números menores que ele.
// Esses valores, então, passam a integrar o vetor de forma ordenada. O laço for vai comparar os valores para fazer tal ordenação.
// A função de ordenação por inserção é um método de varredura dos valores digitados da esquerda pra direita
// e aloca esses elementos a partir da esquerda.

void insertion_sort(int *a)
{
    int i, j, temporario;

    for(i = 1; i < VETOR; i++)
    {
        temporario = a[i];
        for(j = i-1; j >= 0 && temporario < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temporario;
    }
}


