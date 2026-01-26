/*
 * Autor: Frederico Santos Gonçalves
 * Data: 12/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Watermelon
 * Link: https://codeforces.com/problemset/problem/4/A
 * Dificuldade: 1
 */

import java.util.Scanner;

public class watermelon {
  static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
      int weight = scanner.nextInt();
      if(weight != 2 && weight%2 == 0) System.out.print("YES");
      else System.out.print("NO");
  }
}
