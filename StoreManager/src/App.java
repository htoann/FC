import java.text.DateFormat;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        LISTOFTICKET x = new LISTOFTICKET();
        x.Nhap();
        System.out.println("\n------File Out------\n");
        x.Xuat();
        sc.close();
    }
}