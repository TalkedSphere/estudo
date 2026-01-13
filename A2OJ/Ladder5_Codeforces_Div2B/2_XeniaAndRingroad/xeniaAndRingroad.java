/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Xenia and Ringroad
 * Link: https://codeforces.com/problemset/problem/339/B
 * Dificuldade: 2
 */

import java.util.Scanner;

public class xeniaAndRingroad {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    long n = scanner.nextLong();
    long m = scanner.nextLong();
    scanner.nextLine();
    long pos = 1, nextPos, time = 0;

    for(long i = 0; i < m; i++) {
      nextPos = scanner.nextLong();
      if(nextPos >= pos) time += nextPos-pos;
      else {
        time += n-pos;
        time += nextPos;
      }
      pos = nextPos;
    }

    System.out.println(time);
  }
}
