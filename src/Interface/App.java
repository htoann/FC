package Interface;

import java.util.*;

interface ICals1 {
  int add(int a, int b);

  int sub(int a, int b);
}

interface ICals2 {
  int mul(int a, int b);

  float div(int a, int b);
}

class Cals implements ICals1, ICals2 {
  public static Scanner sc = new Scanner(System.in);

  public int add(int a, int b) {
    return a + b;
  }

  public int sub(int a, int b) {
    return a - b;
  }

  public int mul(int a, int b) {
    return a * b;
  }

  public float div(int a, int b) {
    return (float) (a) / b;
  }
}

class Calculation extends Cals {
  public static Scanner sc = new Scanner(System.in);
  int a, b;
  char x;

  void input() {
    System.out.print("Enter a: ");
    a = sc.nextInt();
    System.out.print("Enter b: ");
    b = sc.nextInt();
    do {
      System.out.print("Enter (+, -, *, /): ");
      x = sc.next().charAt(0);
    } while (x != '+' && x != '-' && x != '*' && x != '/');
    if (x == '/' && b == 0) {
      do {
        System.out.print("Enter b: ");
        b = sc.nextInt();
      } while (b == 0);
    }

  }

  void output() {
    if (x == '+') {
      System.out.println("Tong la " + add(a, b));
    }
    if (x == '-') {
      System.out.println("Hieu la " + sub(a, b));
    }
    if (x == '*') {
      System.out.println("Tich la " + mul(a, b));
    }
    if (x == '/') {
      System.out.println("Thuong la " + div(a, b));
    }
  }
}

public class App {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Calculation c = new Calculation();
    char z;
    do {
      c.input();
      c.output();
      System.out.println("Ban co muon tiep tuc: (Y/N)? ");
      z = sc.next().charAt(0);
    } while (z == 'Y' || z == 'y');

  }
}