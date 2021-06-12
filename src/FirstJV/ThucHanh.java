package FirstJV;

import java.util.Scanner;

public class ThucHanh {
    public static Scanner sc = new Scanner(System.in);

    public static int SoHoanHao(int n) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
            return 1;
        return 0;
    }

    public static void DaySoHoanHao(int a[], int n) {
        for (int i = 0; i < n; i++) {
            if (SoHoanHao(a[i]) == 1) {
                System.out.print(a[i] + " ");
            }
        }
    }

    public static int SoChan(int n) {
        if (n % 2 == 0) {
            return 1;
        }
        return 0;
    }

    public static void DaySoChan(int a[], int n) {
        for (int i = 0; i < n; i++) {
            if (SoChan(a[i]) == 1) {
                System.out.print(a[i] + " ");
            }
        }
    }

    public static int ChinhPhuong(int n) {
        int i = 0;
        while (i * i <= n) {
            if (i * i == n)
                return 1;
            ++i;
        }
        return 0;
    }

    public static void DaySoChinhPhuong(int a[], int n) {
        for (int i = 0; i < n; i++) {
            if (ChinhPhuong(a[i]) == 1) {
                System.out.print(a[i] + " ");
            }
        }
    }

    public static void input(int a[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print("a[" + (i + 1) + "] : ");
            a[i] = sc.nextInt();
        }
    }

    public static void output(int a[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
    }

    public static void main(String[] args) {
        int n;
        int a[] = new int[100];
        System.out.print("Nhap so phan tu: ");
        n = sc.nextInt();
        input(a, n);
        System.out.print("Mang vua nhap la: ");
        output(a, n);
        System.out.print("\nDay so hoan hao: ");
        DaySoHoanHao(a, n);
        System.out.print("\nDay so chan: ");
        DaySoChan(a, n);
        System.out.print("\nDay so chinh phuong: ");
        DaySoChinhPhuong(a, n);
    }
}