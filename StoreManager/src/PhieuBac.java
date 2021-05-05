public class PhieuBac extends PhieuMuaHang {
    double value;
    public void TinhGiaTri() {
        if(LoaiKhachHang == 1) {
            value = khtx.TinhDiem() * 15000;
        }
        if(LoaiKhachHang == 2) {
            value = khv.TinhDiem() * 15000;
        }
    }
}