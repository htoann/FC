import java.util.Scanner;

public class Day {
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
    // 18 - 04 - 2002 -> 15 04 2002
    public int Check(Day n, Day o) {
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
