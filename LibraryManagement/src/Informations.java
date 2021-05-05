import java.util.Scanner;

public class Informations {
    Scanner sc = new Scanner(System.in);
    String Address, Phone, Email;
    public void Nhap() {
        System.out.print("Enter Address: ");
        Address = sc.nextLine();
        System.out.print("Enter Phone: ");
        Phone = sc.nextLine();
        System.out.print("Enter Email: ");
        Email = sc.nextLine();
    }
    public void Xuat() {
        System.out.println("Address: " + Address);
        System.out.println("Phone: " + Phone);
        System.out.println("Email: " + Email);
    }
}
