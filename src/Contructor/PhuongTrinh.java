package Contructor;

import java.util.*;

class PhuongTrinh {
  public static Scanner sc = new Scanner(System.in);

  float a, b, c;

  PhuongTrinh() {

  }

  PhuongTrinh(int a, int b, int c) {
    this.a = a;
    this.b = b;
    this.c = c;
  }

  void GiaiPTBac2() {
    if (this.a == 0) {
      if (this.b == 0) {
        if (this.c == 0) {
          System.out.println("PT VSN");
        } else
          System.out.println("PT VN");
      } else {
        System.out.println("PT co nghiem x = " + (float) -this.c / this.b);
      }
    } else {
      float denta = this.b * this.b - (4 * a * this.c);
      if (denta > 0) {
        double x1 = ((-this.b + Math.sqrt(denta)) / (2 * a));
        double x2 = ((-this.b - Math.sqrt(denta)) / (2 * a));
        System.out.println("PT co nghiem x1 = " + x1);
        System.out.println("PT co nghiem x2 = " + x2);
      } else if (denta == 0) {
        System.out.println("PT co nghiem kep x1 = x2 = " + -this.b / (2 * a));
      } else {
        System.out.println("PT VN");
      }
    }
  }

  public static void main(String[] args) throws Exception {
    PhuongTrinh pt = new PhuongTrinh(1, 2, 3);
    pt.GiaiPTBac2();
  }
}
