import java.util.Scanner;

public class KhachHangVip extends KhachHang {
    double SoTienDaMuaHang;
    KhachHang x = new KhachHang();
    Scanner sc = new Scanner(System.in);
    public void Nhap() {
        x.Nhap();
        System.out.print("Enter Bill: ");
        SoTienDaMuaHang = sc.nextDouble();

    }
    public void Xuat() {
        x.Xuat();
        System.out.println("Bill: " + SoTienDaMuaHang);
        System.out.println("Score = " + TinhDiem());
    }
    public double TinhDiem() {
        return SoTienDaMuaHang / 100000;
    }
}
