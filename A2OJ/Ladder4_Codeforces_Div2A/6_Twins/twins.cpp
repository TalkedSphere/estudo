/*
 * Autor: Frederico S. Gonçalves e Bernardo Drummond
 * Data: 19/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Twins
 * Link: https://codeforces.com/problemset/problem/160/A
 * Dificuldade: 2
 */

#include <bits/stdc++.h>
#define SUCESSO 0
#define pb push_back
using namespace std;

int n;
vector<int> c;
int ans = 1;

int main() {
  cin >> n;

  for(int i = 0; i < n; i++) {
    int v;
    cin >> v;
    c.pb(v);
  }

  sort(c.begin(), c.end());

  for(int i = n - 1; i >= 0; i--) {
    int sumEsq = 0, sumDir = 0;

    for(int j = 0; j < i; j++) sumEsq += c[j];
    for(int k = i; k < n; k++) sumDir += c[k];

    if(sumEsq >= sumDir) ans++;
    else break;
  }

  cout << ans;
  return SUCESSO;
}
