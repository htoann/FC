package Contructor;

import java.util.*;

class Add {
  float a, b, c;

  Add() {

  }

  Add(float a, float b, float c) {
    this.a = a;
  }

  public static Scanner sc = new Scanner(System.in);

  public static int add(int a, int b) {
    return a + b;
  }

  public static int add(int a, int b, int c) {
    return a + b + c;
  }

  public static float add(int a, float b) {
    return a + b;
  }

  public static float add(float a, float b, float c) {
    return a + b + c;
  }

  public static void main(String[] args) throws Exception {
    float a, b, c;
    System.out.print("Nhap a: ");
    a = sc.nextFloat();
    System.out.print("Nhap b: ");
    b = sc.nextFloat();
    System.out.print("Nhap c: ");
    c = sc.nextFloat();
    System.out.print(add(a, b, c));
  }
}
