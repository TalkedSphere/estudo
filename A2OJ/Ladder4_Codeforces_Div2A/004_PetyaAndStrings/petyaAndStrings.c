/*
 * Autor: Frederico Santos Gonçalves
 * Data: 14/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Petya and Strings
 * Link: https://codeforces.com/problemset/problem/112/A
 * Dificuldade: 1
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SUCESSO (0)
#define TAM_MAX (1000)

int main() {
  char str1[TAM_MAX], str2[TAM_MAX];
  scanf("%s%*c", &str1);
  scanf("%s%*c", &str2);

  int resultado = 0;
  for(int i = 0; i < strlen(str1); i++) {
    if(tolower(str1[i]) < tolower(str2[i])) {
      resultado = -1;
      break;
    }

    if(tolower(str1[i]) > tolower(str2[i])) {
      resultado = 1;
      break;
    }
  }

  printf("%d", resultado);
  return SUCESSO;
}
