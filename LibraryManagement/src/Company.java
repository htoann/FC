import java.util.ArrayList;
import java.util.Scanner;

public class Company {
    Scanner sc = new Scanner(System.in);
    BorrowerInfo x = new BorrowerInfo();
    ArrayList <LoanSlip> listls = new ArrayList<>();
    public void Nhap() {
        int index;
        do {
            System.out.println("1. Enter Loan Slip\n2. Exit");
            index = sc.nextInt();
            if(index == 1) {
                LoanSlip ls = new LoanSlip();
                ls.Nhap();
                listls.add(ls);
            }
        } while (index != 2);
    }
    public void Xuat() {
        int n = listls.size();
        for(int i = 0; i < n; i++) {
            System.out.println("\n-> Loan Slip " + (i + 1) + " ->");
            listls.get(i).Xuat();
        }
    }
}
