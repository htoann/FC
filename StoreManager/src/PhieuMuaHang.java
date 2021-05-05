import java.util.Scanner;

public class PhieuMuaHang {
    Scanner sc = new Scanner(System.in);
    String MaPhieu, InfoCustomer;
    Ngay NgayHetHan = new Ngay();
    KhachHangThuongXuyen khtx = new KhachHangThuongXuyen();
    KhachHangVip khv = new KhachHangVip();
    int LoaiKhachHang;

    public void Nhap() {
        System.out.println("1. Standard Member\n2. Vip Member");
        LoaiKhachHang = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Ticket Code: ");
        MaPhieu = sc.nextLine();
        if(LoaiKhachHang == 1) {
            khtx.Nhap();
            
        }
        if(LoaiKhachHang == 2) {
            khv.Nhap();
        }
    }
    public void Xuat() {
        System.out.println("Ticket Code: " + MaPhieu);
        if(LoaiKhachHang == 1) {
            khtx.Xuat();
        }
        if(LoaiKhachHang == 2) {
            khv.Xuat();
        }
    }
}