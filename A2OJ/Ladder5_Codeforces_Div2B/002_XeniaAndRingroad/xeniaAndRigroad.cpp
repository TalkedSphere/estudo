/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Xenia and Ringroad
 * Link: https://codeforces.com/problemset/problem/339/B
 * Dificuldade: 2
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
using namespace std;
 
int main() {
  int n, m;
  int pos = 1, nextPos;
  unsigned long long int time = 0;

  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    cin >> nextPos;
    if(nextPos >= pos) time += nextPos-pos;
    else {
      time += n-pos;
      time += nextPos;
    }
    pos = nextPos;
  }

  cout << time;
  return SUCESSO;
}
