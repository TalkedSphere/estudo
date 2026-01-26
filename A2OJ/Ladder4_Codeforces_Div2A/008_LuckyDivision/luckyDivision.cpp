/*
 * Autor: Frederico Santos Gonçalves
 * Data: 19/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Lucky Division
 * Link: https://codeforces.com/problemset/problem/122/A
 * Dificuldade: 2
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
using namespace std;
const vector<int> luckyNums = {4, 7};

int main() {
  int num;
  cin >> num;

  int c = 0, d = 0, u = 0;
  for(int i = 0; i < luckyNums.size(); i++) {
    for(int j = 0; j < luckyNums.size(); j++) {
      for(int k = 0; k < luckyNums.size(); k++) {
        u = luckyNums[k];
        int divisor = (c*100) + (d*10) + u;
        if(num % divisor == 0) {
          cout << "YES";
          return SUCESSO;
        }
      }
      d = luckyNums[j];
    }
    c = luckyNums[i];
  }

  cout << "NO";
  return SUCESSO;
}
