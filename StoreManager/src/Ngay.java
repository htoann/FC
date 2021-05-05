import java.util.Scanner;

public class Ngay {
    int day, month, year;
    Scanner sc = new Scanner(System.in);
    public void Nhap() {
        System.out.print("(d/m/y): ");
        day = sc.nextInt();
        month = sc.nextInt();
        year = sc.nextInt();
    }
    public void Xuat() {
        System.out.println(day + "/" + month + "/" + year);
    }

    public int getYear() {
        return year;
    }
    public int Check(Ngay n, Ngay o) {
        if(n.year < o.year) {
            return 0;
        }
        if(n.year == o.year) {
            if(n.month < o.month) {
                return 0;
            }
            if(n.month == o.month) {
                if(n.day < o.day) return 0;
            }
        }
        return 1;
    }
}
