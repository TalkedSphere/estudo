/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Twins
 * Link: https://codeforces.com/problemset/problem/160/A
 * Dificuldade: 2
 */

import java.util.Scanner;
import java.util.Collections;
import java.util.Stack;

public class twins {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    int n = scanner.nextInt();
    int minhaSoma = 0, total = 0;
    
    Stack<Integer> moedas = new Stack<>();
    for(int i = 0; i < n; i++) {
      int v = scanner.nextInt();
      moedas.add(v);
      total += v;
    }
    Collections.sort(moedas);

    for(int i = n - 1; i >= 0; i--) {
      minhaSoma += moedas.pop();

      if(minhaSoma > total/2) {
        System.out.println(n-i);
        break;
      }
    }
  }
}
