import java.util.Scanner;

public class ThongTinLienLac {
    String Address, Phone, Email;
    Scanner sc = new Scanner(System.in);
    public void Nhap() {
        System.out.print("Enter Address: ");
        Address = sc.nextLine();
        System.out.print("Enter Phone Number: ");
        Phone = sc.nextLine();
        System.out.print("Enter Email: ");
        Email = sc.nextLine();
    }
    public void Xuat() {
        System.out.println("Address: " + Address );
        System.out.println("Phone Number: " + Phone); 
        System.out.println("Email: " + Email);
    }
}