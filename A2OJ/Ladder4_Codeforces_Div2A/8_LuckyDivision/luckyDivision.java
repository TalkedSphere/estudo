/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Lucky Division
 * Link: https://codeforces.com/problemset/problem/122/A
 * Dificuldade: 2
 */

import java.util.Scanner;

public class luckyDivision {
  private static final Scanner scanner = new Scanner(System.in);
  private static final int[] LUCKY_NUMS = {4, 7};

  public static void main(String[] args) {
    int num = scanner.nextInt();

    int c = 0, d = 0, u;
    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 2; k++) {
          u = LUCKY_NUMS[k];
          int divisor = (c*100) + (d*10) + u;
          if(num % divisor == 0) {
            System.out.println("YES");
            return;
          }
        }
        d = LUCKY_NUMS[j];
      }
      c = LUCKY_NUMS[i];
    }
    System.out.println("NO");
  }
}
