public class PhieuChuan extends PhieuMuaHang{
    double value;
    public void TinhGiaTri() {
        if(LoaiKhachHang == 1) {
            value = khtx.TinhDiem() * 10000;
        }
        if(LoaiKhachHang == 2) {
            value = khv.TinhDiem() * 10000;
        }
    }
}