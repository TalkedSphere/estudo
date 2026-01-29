/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Beautiful Matrix
 * Link: https://codeforces.com/problemset/problem/263/A
 * Dificuldade: 1
 */

#include <bits/stdc++.h>
using namespace std;
const int SUCESSO (0);
const int TAM_MAX (5);
const int OBJETIVO (3);
const int INDEFINIDO (-1);

int main() {
  int posX = INDEFINIDO, posY = INDEFINIDO;
  for(int i = 0; i < TAM_MAX; i++) {
    for(int j = 0; j < TAM_MAX; j++) {
      int v; cin >> v;
      if(v == 1) {
        posX = i+1;
        posY = j+1;
        break;
      }
    }
    if(posX != INDEFINIDO && posY != INDEFINIDO) break;
  }

  int quantMov = 0;
  if(posX > OBJETIVO) quantMov += posX-OBJETIVO;
  else quantMov += OBJETIVO-posX;
  if(posY > OBJETIVO) quantMov += posY-OBJETIVO;
  else quantMov += OBJETIVO-posY;

  cout << quantMov;
  return SUCESSO;
}
