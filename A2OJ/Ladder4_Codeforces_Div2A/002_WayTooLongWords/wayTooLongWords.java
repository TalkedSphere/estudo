/*
 * Autor: Frederico Santos Gonçalves
 * Data: 12/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Way Too Long Words
 * Link: https://codeforces.com/problemset/problem/71/A
 * Dificuldade: 1
 */

import java.util.Scanner;

public class wayTooLongWords {
  static final private Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    int n = scanner.nextInt();
    scanner.nextLine();

    // Cria o vetor para armazenar as strings.
    String[] palavras = new String[n];

    // Obtém e guarda as strings.
    for(int i = 0; i < n; i++) palavras[i] = scanner.nextLine();

    // Printa os resultados.
    for(int i = 0; i < n; i++) {
      int tam = palavras[i].length();
      if(tam >= 11) {
        System.out.println(palavras[i].charAt(0) + Integer.toString(tam-2) + palavras[i].charAt(tam-1));
      }
      else System.out.println(palavras[i]);
    }
  }
}
