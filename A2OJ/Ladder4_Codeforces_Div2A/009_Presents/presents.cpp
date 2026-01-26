/*
 * Autor: Frederico S. Gonçalves e Bernardo Drummond
 * Data: 19/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Presents
 * Link: https://codeforces.com/problemset/problem/136/A
 * Dificuldade: 1
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
#define TAM_MAX (100)
#define pb push_back
using namespace std;

int main() {
  int qntParticipants;
  cin >> qntParticipants;

  int presents[TAM_MAX];
  for(int i = 1; i <= qntParticipants; i++) {
    int v;
    cin >> v;
    presents[v] = i;
  }

  for(int i = 1; i <= qntParticipants; i++) cout << presents[i] << ' ';
  return SUCESSO;
}
