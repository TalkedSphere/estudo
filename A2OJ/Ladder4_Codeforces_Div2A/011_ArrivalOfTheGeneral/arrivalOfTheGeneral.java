/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Arrival of the General 
 * Link: https://codeforces.com/problemset/problem/144/A
 * Dificuldade: 1
 */

import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class arrivalOfTheGeneral {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    int n = scanner.nextInt();
    ArrayList<Integer> fila = new ArrayList<>();

    int posMin, posMax;
    for(int i = 0; i < n; i++) fila.add(scanner.nextInt());
    posMin = fila.lastIndexOf(Collections.min(fila));
    posMax = fila.indexOf(Collections.max(fila));

    int time = 0;
    time += posMax;
    time += n - 1 - posMin;
    if(posMin < posMax) time--;

    System.out.println(time);
  }
}
