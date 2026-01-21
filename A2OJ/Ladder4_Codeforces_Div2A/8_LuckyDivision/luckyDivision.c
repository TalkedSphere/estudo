/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Lucky Division
 * Link: https://codeforces.com/problemset/problem/122/A
 * Dificuldade: 2
 */

#include <stdio.h>
#define SUCESSO (0)

int main() {
  int luckyNums[2] = {4, 7};
  int num;
  scanf("%d", &num);

  int c = 0, d = 0, u = 0;
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      for(int k = 0; k < 2; k++) {
        u = luckyNums[k];
        int divisor = (c*100) + (d*10) + u;
        if(num % divisor == 0) {
          printf("YES");
          return SUCESSO;
        }
      }
      d = luckyNums[j];
    }
    c = luckyNums[i];
  }

  printf("NO");
  return SUCESSO;
}
