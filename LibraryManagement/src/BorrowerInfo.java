import java.util.Scanner;

public class BorrowerInfo {
    String CMND, Name;
    Informations info = new Informations();
    Scanner sc = new Scanner(System.in);
    public void Nhap() {
        System.out.println("   Borrower Info");
        System.out.print("Enter CMND: ");
        CMND = sc.nextLine();
        System.out.print("Enter Name: ");
        Name = sc.nextLine();
        info.Nhap();
    }
    public void Xuat() {
        System.out.println("   Borrower Info");
        System.out.println("CMND: " + CMND);
        System.out.println("Name: " + Name);
        info.Xuat();
    }
}