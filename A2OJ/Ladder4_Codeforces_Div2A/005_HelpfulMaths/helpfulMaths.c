/*
 * Autor: Frederico Santos Gonçalves
 * Data: 15/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Helpful Maths
 * Link: https://codeforces.com/problemset/problem/339/A
 * Dificuldade: 1
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SUCESSO (0)
#define TAM_MAX (1000)

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
  char s[TAM_MAX];
  scanf("%s%*c", &s);

  int nums[TAM_MAX];
  for(int i = 0; i < strlen(s); i++) {
    if(s[i] != '+') {
      char c[2];
      c[0] = s[i];
      c[1] = '\0';
      nums[i/2] = atoi(c);
    }
  }
  bubbleSort(nums, (strlen(s)/2)+1);

  for(int i = 0; i < (strlen(s)/2)+1; i++) {
    if(i != 0) printf("+");
    printf("%d", nums[i]);
  }

  return SUCESSO;
}
