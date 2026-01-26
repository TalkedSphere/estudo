/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Petya and Strings
 * Link: https://codeforces.com/problemset/problem/112/A
 * Dificuldade: 1
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
using namespace std;

int main() {
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);

  int resultado = 0;
  for(int i = 0; i < str1.length(); i++) {
    if(tolower(str1[i]) < tolower(str2[i])) {
      resultado = -1;
      break;
    }

    if(tolower(str1[i]) > tolower(str2[i])) {
      resultado = 1;
      break;
    }
  }

  cout << resultado;
  return SUCESSO;
}
