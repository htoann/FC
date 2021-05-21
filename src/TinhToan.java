import java.util.Scanner;

public class TinhToan {
    public static Scanner sc = new Scanner(System.in);

    public static double Cong(float a, float b) {
        return a + b;
    }

    public static double Tru(float a, float b) {
        return a - b;
    }

    public static double Nhan(float a, float b) {
        return a * b;
    }

    public static double Chia(float a, float b) {
        if (b == 0) {
            System.out.println("Error");
            System.out.print("b = ");
            b = sc.nextInt();
        }
        return (double) a / b;
    }

    public static int Input(String s) {
        System.out.print(s);
        int num = sc.nextInt();
        return num;
    }

    public static void main(String[] args) {
        char tieptuckhong;
        do {
            float a = Input("Nhap a: ");
            float b = Input("Nhap b: ");
            System.out.print("Nhap mot ki tu: + - * /: ");
            String c = sc.next();
            switch (c) {
                case "+":
                    System.out.println("Tong = " + Cong(a, b));
                    break;
                case "-":
                    System.out.println("Hieu = " + Tru(a, b));
                    break;
                case "*":
                    System.out.println("Tich = " + Nhan(a, b));
                    break;
                case "/":
                    System.out.println("Thuong = " + Chia(a, b));
                    break;
                default:
                    System.out.println("Loi ki tu");
            }
            System.out.println("Tiep tuc khong: (y/n)");
            tieptuckhong = sc.next().charAt(0);
        } while (tieptuckhong == 'Y' || tieptuckhong == 'y');
    }
}
