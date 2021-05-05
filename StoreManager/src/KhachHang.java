import java.util.Scanner;

public class KhachHang {
    String customerCode, Name;
    Scanner sc = new Scanner(System.in);
    ThongTinLienLac ttll = new ThongTinLienLac();
    Ngay NgaySinh = new Ngay();
    public void Nhap() {
        System.out.print("Enter Customer Code: ");
        customerCode = sc.nextLine();
        System.out.print("Enter Name: ");
        Name = sc.nextLine();
        ttll.Nhap();
        System.out.print("Enter Date Of Birth ");
        NgaySinh.Nhap();
    }
    public void Xuat() {
        System.out.println("Customer Code: " + customerCode);
        System.out.println("Name: " + Name);
        System.out.println("   Informations");
        ttll.Xuat();
        System.out.print("Date Of Birth: ");
        NgaySinh.Xuat();
    }
}
