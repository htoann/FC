package Ngay2505;

import java.util.*;

public class Q1 {
  public static Scanner sc = new Scanner(System.in);

  public static void Input(int a[], int n) {
    for (int i = 0; i < n; i++) {
      System.out.print("Enter" + " a[" + (i + 1) + "]" + ": ");
      a[i] = sc.nextInt();
    }
  }

  public static void Output(int a[], int n) {
    for (int i = 0; i < n; i++) {
      System.out.println(a[i] + " ");
    }
  }

  public static int checkPrime(int n) {
    if (n < 2) {
      return 0;
    }
    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
        return 0;
      }
    }
    return 1;
  }

  public static void primeList(int a[], int n) {
    System.out.print("\nPrime List: ");
    for (int i = 0; i < n; i++) {
      if (checkPrime(a[i]) == 1) {
        System.out.print(a[i] + " ");
      }
    }
  }

  public static void main(String[] args) throws Exception {
    int n = 20;
    int a[] = new int[n + 1];
    Input(a, n);
    primeList(a, n);
  }
}
