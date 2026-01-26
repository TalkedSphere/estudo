/*
 * Autor: Frederico Santos Gonçalves
 * Data: 15/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Helpful Maths
 * Link: https://codeforces.com/problemset/problem/339/A
 * Dificuldade: 1
 */

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class helpfulMaths {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    String s = scanner.nextLine();
    char[] S = s.toCharArray();
    
    ArrayList<Integer> nums = new ArrayList<>();
    for(int i = 0; i < s.length(); i++) if(i%2 == 0) nums.add(S[i]-'0');
    Collections.sort(nums);

    for(int i = 0; i < nums.size(); i++) {
      if(i != 0) System.out.print("+");
      System.out.print(nums.get(i));
    }
  }
}
