/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Chat Room
 * Link: https://codeforces.com/problemset/problem/58/A
 * Dificuldade: 2
 */

import java.util.Scanner;

public class chatRoom {
  private static final Scanner scanner = new Scanner(System.in);
  private static final String model = "hello";

  public static void main(String[] args) {
    String msg = scanner.nextLine();

    int posModel = 0;
    for(int i = 0; i < msg.length(); i++) {
      if(msg.charAt(i) == model.charAt(posModel)) posModel++;
      if(posModel == model.length()) {
        System.out.println("YES");
        break;
      }
    }

    if(posModel < model.length()) System.out.println("NO");
  }
}
