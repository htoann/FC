package FirstJV;

import java.util.Scanner;
// import java.until.*;
// import java.io.*;

public class GiaiPT {
    public static Scanner sc = new Scanner(System.in);

    public static int Input(String s) {
        System.out.print(s);
        int num = sc.nextInt();
        return num;
    }

    public static void GiaiPTBac1(float a, float b) {
        if (a == 0) {
            if (b == 0) {
                System.out.println("PT VSN");
            } else
                System.out.println("PT VN");
        } else {
            System.out.println("PT co nghiem x = " + (float) -b / a);
        }
    }

    public static void GiaiPTBac2(float a, float b, float c) {
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    System.out.println("PT VSN");
                } else
                    System.out.println("PT VN");
            } else {
                System.out.println("PT co nghiem x = " + (float) -c / b);
            }
        } else {
            float denta = b * b - (4 * a * c);
            if (denta > 0) {
                double x1 = ((-b + Math.sqrt(denta)) / (2 * a));
                double x2 = ((-b - Math.sqrt(denta)) / (2 * a));
                System.out.println("PT co nghiem x1 = " + x1);
                System.out.println("PT co nghiem x2 = " + x2);
            } else if (denta == 0) {
                System.out.println("PT co nghiem kep x1 = x2 = " + -b / (2 * a));
            } else {
                System.out.println("PT VN");
            }
        }
    }

    public static void main(String[] args) {
        float a = Input("Nhap a: ");
        float b = Input("Nhap b: ");
        float c = Input("Nhap c: ");
        int luachon = Input("Nhap lua chon: ");
        switch (luachon) {
            case 1:
                GiaiPTBac1(a, b);
                break;
            case 2:
                GiaiPTBac2(a, b, c);
                break;
            default:
                System.out.println("Loi ki tu");
        }
    }
}
