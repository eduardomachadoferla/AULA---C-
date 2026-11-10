
#include <stdio.h>

// Funcao para mostrar o vetor
void mostrarVetor(int vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

// 1 - Ordenacao Bolha 
void ordenarBolha(int vetor[], int tamanho) {
    int i, j, temp;
    int houveTroca;

    for (i = 0; i < tamanho - 1; i++) {

        houveTroca = 0;// informa problema de troca de N

        for (j = 0; j < tamanho - 1 - i; j++) {

            if (vetor[j] > vetor[j + 1]) {

                temp = vetor[j]; // guarda o numero atual 
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;

                houveTroca = 1;
            }
        }

        if (houveTroca == 0) {
            break;
        }
    }
}

// 2 - Ordenacao por Selecao (Selection Sort)
void ordenarSelecao(int vetor[], int tamanho) {
    int i, j, menor, temp;

    for (i = 0; i < tamanho - 1; i++) {

        menor = i;

        for (j = i + 1; j < tamanho; j++) {

            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }
}

// 3 - Ordenacao por Insercao 
void ordenarInsercao(int vetor[], int tamanho) {
    int i, j, chave;

    for (i = 1; i < tamanho; i++) {

        chave = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > chave) { // condiçao verdadeira

            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = chave; //Coloca a chave na posição correta do vetor.
    }
}

// Funcao principal
int main() {

    int vetor1[] = {5, 3, 8, 1, 2};
    int vetor2[] = {5, 3, 8, 1, 2};
    int vetor3[] = {5, 3, 8, 1, 2};

    int tamanho = 5;

    printf("Vetor original: ");
    mostrarVetor(vetor1, tamanho);

    // Bubble Sort
    ordenarBolha(vetor1, tamanho);

    printf("\nOrdenacao Bolha: ");
    mostrarVetor(vetor1, tamanho);

    // Selection Sort
    ordenarSelecao(vetor2, tamanho);

    printf("Ordenacao Selecao: ");
    mostrarVetor(vetor2, tamanho);

    // Insertion Sort
    ordenarInsercao(vetor3, tamanho);

    printf("Ordenacao Insercao: ");
    mostrarVetor(vetor3, tamanho);

    return 0;
}



