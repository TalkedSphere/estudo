/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Queue at the School
 * Link: https://codeforces.com/problemset/problem/266/B
 * Dificuldade: 1
 */

import java.util.Scanner;

public class queueAtTheSchool {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    int n = scanner.nextInt();
    int t = scanner.nextInt();
    scanner.nextLine();

    String fila = scanner.nextLine();
    String novaFila = fila;

    for(int i = 0; i < t; i++) {
      for(int j = 0; j < n-1; j++) {
        if(fila.charAt(j) == 'B' && fila.charAt(j+1) == 'G') {
          novaFila = novaFila.replaceAll("BG", "GB");
          break;
        }
      }
      fila = novaFila;
    }

    System.out.println(novaFila);
  }
}
