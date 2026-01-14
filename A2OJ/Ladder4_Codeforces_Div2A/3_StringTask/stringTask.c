/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: String Task
 * Link: https://codeforces.com/problemset/problem/118/A
 * Dificuldade: 2
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SUCESSO 0
#define TAM_MAX 1000
#define VOGAIS "aAeEiIoOuUyY"

int main() {
  char palavra[TAM_MAX];
  scanf("%s%*c", &palavra);

  for(int i = 0; i < strlen(palavra); i++) {
    if(strchr(VOGAIS, palavra[i]) == NULL) printf(".%c", tolower(palavra[i]));
  }

  return SUCESSO;
}
