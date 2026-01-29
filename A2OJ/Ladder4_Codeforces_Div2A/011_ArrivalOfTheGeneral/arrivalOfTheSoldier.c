/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Arrival of the General 
 * Link: https://codeforces.com/problemset/problem/144/A
 * Dificuldade: 1
 */

#include <stdio.h>
#define SUCESSO (0)
#define TAM_MAX (100)

int main() {
  int n, fila[TAM_MAX];
  scanf("%d%*c", &n);

  int min = __INT_MAX__, posMin, max = 0, posMax;
  for(int i = 0; i < n; i++) {
    scanf("%d%*c", &fila[i]);

    if(fila[i] > max) {
      max = fila[i];
      posMax = i;
    }
    if(fila[i] <= min) {
      min = fila[i];
      posMin = i;
    }
  }

  int time = 0;
  time += posMax;
  time += n - 1 - posMin;
  if(posMin < posMax) time--;

  printf("%d", time);
  return SUCESSO;
}
