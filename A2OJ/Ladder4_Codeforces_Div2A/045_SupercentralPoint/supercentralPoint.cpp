/*
 * Autor: Frederico S. Gonçalves e Bernardo Drummond
 * Data: 23/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Supercentral Point
 * Link: https://codeforces.com/problemset/problem/165/A
 * Dificuldade: 2
 */

#include <bits/stdc++.h>
#define SUCESSO 0
#define pb push_back
#define mp make_pair
using namespace std;
vector<pair<int, int>> pontos;

int main() {
  int resposta = 0;
  int n; cin >> n;

  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    pontos.pb(mp(x, y));
  }
  sort(pontos.begin(), pontos.end());

  for(int i = 1; i < n-1; i++) {
    if(pontos[i].first == pontos[i-1].first && pontos[i].first == pontos[i+1].first) {
      bool vizDir = false, vizEsq = false;
      for(int j = 0; j < n; j++) {
        if(pontos[i].second == pontos[j].second && pontos[i].first > pontos[j].first) vizDir = true;
        else if(pontos[i].second == pontos[j].second && pontos[i].first < pontos[j].first) vizEsq = true;
        if(vizDir && vizEsq) {
          resposta++;
          break;
        }
      }
    }
  }

  cout << resposta;
  return SUCESSO;
}
