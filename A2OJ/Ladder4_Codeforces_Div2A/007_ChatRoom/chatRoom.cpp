/*
 * Autor: Frederico Santos Gonçalves
 * Data: 19/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Chat Room
 * Link: https://codeforces.com/problemset/problem/58/A
 * Dificuldade: 2
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
using namespace std;
const string model = "hello";

int main() {
  string msg;
  getline(cin, msg);

  int posModel = 0;
  for(int i = 0; i < msg.length(); i++) {
    if(msg[i] == model[posModel]) posModel++;
    else continue;
  }

  if(posModel == model.length()) cout << "YES";
  else cout << "NO";

  return SUCESSO;
}
