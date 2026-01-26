/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Presents
 * Link: https://codeforces.com/problemset/problem/136/A
 * Dificuldade: 1
 */

#include <stdio.h>
#define SUCESSO (0)
#define TAM_MAX (100)

int main() {
  int qntParticipants;
  scanf("%d", &qntParticipants);

  int presents[TAM_MAX];
  for(int i = 1; i <= qntParticipants; i++) {
    int v;
    scanf("%d", &v);
    presents[v] = i;
  }

  for(int i = 1; i <= qntParticipants; i++) printf("%d ", presents[i]);
  return SUCESSO;
}
