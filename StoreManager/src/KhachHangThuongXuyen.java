import java.time.Year;

public class KhachHangThuongXuyen extends KhachHang {
    KhachHang x = new KhachHang();
    Ngay NgayThamGia = new Ngay();
    public void Nhap() {
        x.Nhap();
        System.out.print("Enter Date Join: ");
        NgayThamGia.Nhap();
    }
    public void Xuat() {
        x.Xuat();
        System.out.print("Date Join: ");
        NgayThamGia.Xuat();
        System.out.println("Score = " + TinhDiem());
    }
    public double TinhDiem() {
        return (Year.now().getValue() - NgayThamGia.getYear()) * 10;
    }
}