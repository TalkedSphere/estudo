/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Twins
 * Link: https://codeforces.com/problemset/problem/160/A
 * Dificuldade: 2
 */

#include <stdio.h>
#define SUCESSO (0)
#define TAM_MAX (100)

void bubbleSort(int* array, int tam) {
  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam - 1; j++) {
      if(array[j] <= array[j+1]) continue;
      else {
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

int main() {
  int n, resposta = 1;
  scanf("%d%*c", &n);

  int moedas[TAM_MAX];
  for(int i = 0; i < n; i++) {
    scanf("%d", &moedas[i]);
  }
  
  bubbleSort(moedas, n);

  for(int i = n - 1; i >= 0; i--) {
    int sumEsq = 0, sumDir = 0;

    for(int j = 0; j < i; j++) sumEsq += moedas[j];
    for(int k = i; k < n; k++) sumDir += moedas[k];

    if(sumEsq >= sumDir) resposta++;
    else break;
  }

  printf("%d", resposta);
  return SUCESSO;
}
