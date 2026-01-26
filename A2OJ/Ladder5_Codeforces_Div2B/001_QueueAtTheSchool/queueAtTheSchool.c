/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Queue at the School
 * Link: https://codeforces.com/problemset/problem/266/B
 * Dificuldade: 1
 */

#include <stdio.h>
#include <string.h>
#define SUCESSO (0)
#define TAM_MAX (100)
#define BOY ('B')
#define GIRL ('G')

int main() {
  int n, t;
  scanf("%d %d%*c", &n, &t);
  char fila[TAM_MAX], novaFila[TAM_MAX];
  scanf("%s%*c", &fila);

  strcpy(novaFila, fila);

  for(int i = 0; i < t; i++) {
    for(int j = 0; j < n; j++) {
      if(fila[j] == BOY && fila[j+1] == GIRL) {
        novaFila[j] = GIRL;
        novaFila[j+1] = BOY;
      }
    }
    strcpy(fila, novaFila);
  }

  printf("%s", novaFila);
  return SUCESSO;
}
