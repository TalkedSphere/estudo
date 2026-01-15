/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: String Task
 * Link: https://codeforces.com/problemset/problem/118/A
 * Dificuldade: 2
 */

import java.util.Scanner;

public class stringTask {
  private static final Scanner scanner = new Scanner(System.in);
  private static final String VOGAIS = "aeiouy";

  public static void main(String[] args) {
    String palavra = scanner.nextLine();
    palavra = palavra.toLowerCase();
    
    for(int i = 0; i < palavra.length(); i ++) {
      if(!VOGAIS.contains(palavra.subSequence(i, i+1))) {
        System.out.print("." + palavra.charAt(i));
      }
    }
  }
}
