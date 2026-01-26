/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Helpful Maths
 * Link: https://codeforces.com/problemset/problem/339/A
 * Dificuldade: 1
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
using namespace std;

int main() {
  string expressao;
  getline(cin, expressao);

  // Uma priority_queue é efetivamente um adaptador de contâiner!! 😮😮
  // priority_queue<_tipo_, _tipo de contâiner_, _comparador_> -> usando o comparador
  // nativo "greater<T>" a prioridade da queue é invertida de maior para menor.
  priority_queue<int, vector<int>, greater<int>> nums;
  for(int i = 0; i < expressao.length(); i++) {
    if(expressao[i] != '+') nums.push((int) expressao[i] - '0');
  }

  for(int i = 0; i <= expressao.length()/2; i++) {
    if(i != 0) cout << '+';
    cout << nums.top();
    nums.pop();
  }

  return SUCESSO;
}
