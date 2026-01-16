/*
 * Autor: Frederico Santos Gonçalves
 * Data: 12/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Watermelon
 * Link: https://codeforces.com/problemset/problem/4/A
 * Dificuldade: 1
 */

#include <stdio.h>
#define SUCESSO (0)

int main() {
  int weight;
  scanf("%d", &weight);

  if(weight != 2 && weight%2 == 0) printf("YES");
  else printf("NO");

  return SUCESSO;
}
