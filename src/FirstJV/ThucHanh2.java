package FirstJV;

import java.util.Scanner;

public class ThucHanh2 {
  public static Scanner sc = new Scanner(System.in);

  public static void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
  }

  public static void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
      System.out.print(a[i] + " ");
    }
  }

  public static int KiemTraNguyenTo(int n) {
    if (n < 2)
      return 0;
    for (int i = 2; i < n; i++) {
      if (n % i == 0)
        return 0;
    }
    return 1;
  }

  public static void DaySoNguyenTo(int a[], int n) {
    System.out.print("\nDay so nguyen to la: ");
    for (int i = 0; i < n; i++) {
      if (KiemTraNguyenTo(a[i]) == 1) {
        System.out.print(a[i] + " ");
      }
    }
    int tongnt = 0;
    int tongknt = 0;
    for (int i = 0; i < n; i++) {
      if (KiemTraNguyenTo(a[i]) == 1) {
        tongnt += a[i];
      }
    }
    for (int i = 0; i < n; i++) {
      if (KiemTraNguyenTo(a[i]) == 0) {
        tongknt += a[i];
      }
    }
    System.out.print("\nTong cac so nguyen to = " + tongnt);
    System.out.print("\nTong cac so khong la nguyen to = " + tongknt);

  }

  public static int SoHoanHao(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
      if (n % i == 0)
        sum += i;
    }
    if (sum == n)
      return 1;
    return 0;
  }

  public static void DaySoHoanHao(int a[], int n) {
    System.out.print("\nDay so hoan hao la: ");
    for (int i = 0; i < n; i++) {
      if (SoHoanHao(a[i]) == 1) {
        System.out.print(a[i] + " ");
      }
    }
    int tong1 = 0;
    int tong2 = 0;
    for (int i = 0; i < n; i++) {
      if (SoHoanHao(a[i]) == 1) {
        tong1 += a[i];
      }
    }
    for (int i = 0; i < n; i++) {
      if (SoHoanHao(a[i]) == 0) {
        tong2 += a[i];
      }
    }
    System.out.print("\nTong cac so hoan hao = " + tong1);
    System.out.print("\nTong cac so khong hoan hao = " + tong2);

  }

  public static int ChinhPhuong(int n) {
    int i = 0;
    while (i * i <= n) {
      if (i * i == n)
        return 1;
      ++i;
    }
    return 0;
  }

  public static void DaySoChinhPhuong(int a[], int n) {
    System.out.print("\nDay so chinh phuong la: ");
    for (int i = 0; i < n; i++) {
      if (ChinhPhuong(a[i]) == 1) {
        System.out.print(a[i] + " ");
      }
    }
    int tong1 = 0;
    int tong2 = 0;
    for (int i = 0; i < n; i++) {
      if (ChinhPhuong(a[i]) == 1) {
        tong1 += a[i];
      }
    }
    for (int i = 0; i < n; i++) {
      if (ChinhPhuong(a[i]) == 0) {
        tong2 += a[i];
      }
    }
    System.out.print("\nTong cac so chinh phuong = " + tong1);
    System.out.print("\nTong cac so khong chinh phuong = " + tong2);

  }

  public static void MangGiamDan(int a[]) {
    for (int i = 0; i < a.length; i++) {
      for (int j = i + 1; j < a.length; j++) {
        if (a[i] < a[j]) {
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
  }

  public static void ChenPhanTu(int a[], int n) {
    int k;
    int pt;
    System.out.print("\nNhap phan tu can chen: ");
    pt = sc.nextInt();
    System.out.print("Nhap vi tri can chen: ");
    k = sc.nextInt();
    for (int i = n - 1; i >= k - 1; i--) {
      a[i + 1] = a[i];
    }
    a[k - 1] = pt;
    n++;
    System.out.print("Mang sau khi chen: ");
    XuatMang(a, n);
  }

  public static void XoaPhanTu(int[] a, int n) {
    int pt;
    System.out.print("\nNhap phan tu can xoa: ");
    pt = sc.nextInt();
    int dem = -1;
    for (int i = 0; i < n; i++) {
      do {
        for (int z = 0; z < n; z++) {
          if (pt == a[z]) {
            dem++;
            int vitri = z;
            for (int j = vitri; j < n; j++) {
              a[j] = a[j + 1];
            }
          }
        }
      } while (pt == a[i]);
    }
    n = n - dem;
    System.out.print("Mang sau khi xoa: ");
    XuatMang(a, n);
  }

  public static void SapXepSNTTruoc(int[] a, int n) {

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (KiemTraNguyenTo(a[j]) == 1) {
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    System.out.print("\nSap xep so nguyen to dung truoc: ");
    XuatMang(a, n);
  }

  public static void main(String[] args) throws Exception {
    System.out.print("\nNhap so phan tu mang: ");
    int n = sc.nextInt();
    int[] a = new int[n + 1];
    NhapMang(a, n);
    System.out.print("\nMang vua nhap: ");
    XuatMang(a, n);
    DaySoNguyenTo(a, n);
    DaySoHoanHao(a, n);
    DaySoChinhPhuong(a, n);
    MangGiamDan(a);
    System.out.print("\nMang giam dan: ");
    XuatMang(a, n);
    ChenPhanTu(a, n);
    XoaPhanTu(a, n);
    SapXepSNTTruoc(a, n);
  }
}
