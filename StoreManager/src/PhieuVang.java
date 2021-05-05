


public class PhieuVang extends PhieuMuaHang{
    double value;
    public void TinhGiaTri() {
        if(LoaiKhachHang == 1) {
            if(khtx.TinhDiem() < 200)
            value = khtx.TinhDiem() * 25000;
            else value = khtx.TinhDiem() * 40000;
        }
        if(LoaiKhachHang == 2) {
            if(khv.TinhDiem() < 200)
            value = khv.TinhDiem() * 25000;
            else value = khv.TinhDiem() * 40000;
        }
    }
}