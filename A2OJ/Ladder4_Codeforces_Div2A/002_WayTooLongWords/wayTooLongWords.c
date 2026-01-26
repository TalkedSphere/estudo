/*
 * Autor: Frederico Santos Gonçalves
 * Data: 12/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Way Too Long Words
 * Link: https://codeforces.com/problemset/problem/71/A
 * Dificuldade: 1
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SUCESSO (0)

void util_removeQuebraLinhaFinal(char dados[]) {
    int tamanho = strlen(dados);
    if ((tamanho > 0) && (dados[tamanho - 1] == '\n')) dados[tamanho - 1] = '\0';
}

int main() {
  int n;
  scanf("%d%*c", &n);

  // Cria a matriz para armazenar as strings.
  char** palavras = (char**)malloc(n*sizeof(char*));
  for(int i = 0; i < n; i++) {
    palavras[i] = (char*)malloc(102*sizeof(char));
  }

  // Obtém e guarda as strings.
  for(int i = 0; i < n; i++) {
    char* palavra;
    fgets(palavras[i], 102, stdin);
    util_removeQuebraLinhaFinal(palavras[i]);
  }

  // Printa os resultados.
  for(int i = 0; i < n; i++) {
    if(strlen(palavras[i]) >= 11) {
      printf("%c%d%c\n", palavras[i][0], strlen(palavras[i])-2, palavras[i][strlen(palavras[i])-1]);
    }
    else printf("%s\n", palavras[i]);
  }

  return SUCESSO;
}
