/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Beautiful Matrix
 * Link: https://codeforces.com/problemset/problem/263/A
 * Dificuldade: 1
 */

#include <stdio.h>
#define SUCESSO (0)
#define TAM_MAX (5)
#define OBJETIVO (3)
#define INDEFINIDO (-1)

int main() {
  int matrix[TAM_MAX][TAM_MAX], quantMov = 0;

  int posX = INDEFINIDO, posY = INDEFINIDO;
  for(int i = 0; i < TAM_MAX; i++) {
    for(int j = 0; j < TAM_MAX; j++) {
      scanf("%d%*c", &matrix[i][j]);
      if(matrix[i][j] == 1) {
        posX = i+1;
        posY = j+1;
        break;
      }
    }
    if(posX != INDEFINIDO && posY != INDEFINIDO) break;
  }

  if(posX > OBJETIVO) quantMov += posX-OBJETIVO;
  else quantMov += OBJETIVO-posX;
  if(posY > OBJETIVO) quantMov += posY-OBJETIVO;
  else quantMov += OBJETIVO-posY;

  printf("%d", quantMov);
  return SUCESSO;
}
