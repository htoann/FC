import java.util.ArrayList;
import java.util.Scanner;

public class LoanSlip {
    Scanner sc = new Scanner(System.in);
    String Code;
    Day DayBorrowed = new Day();
    Day PayDay = new Day();
    BorrowerInfo bi = new BorrowerInfo();
    ArrayList <Book> listbook = new ArrayList<>();
    ArrayList <CD> listcd = new ArrayList<>();
    ArrayList <Magazine> listmgz = new ArrayList<>();
    ArrayList <String> listCheckCode = new ArrayList<>();
    public void Nhap() {
        int index;
        System.out.print("\nEnter Code Of Loan Slip: ");
        Code = sc.nextLine();
        
        // int i = 0;
        // do {
        //     System.out.print("\nEnter Code Of Loan Slip: ");
        //     Code = sc.nextLine();
        //     int n = listCheckCode.size();
        //     if(n > 0) {
        //         for(i = 0; i < n; i++)
        //             if(listCheckCode.get(i) == Code) 
        //                 System.out.println("Error code is identical, please retype!");
        //     }
        //     else listCheckCode.add(Code);
        // } while(listCheckCode.get(i) == Code);

        do {
            System.out.println("----- Choose -----\n1. Book\n2. CD\n3. Magazine\n4. Enter Informations\n");
            index = sc.nextInt();
            if(index == 1) {
                Book b = new Book();
                b.Nhap();
                listbook.add(b);
            }
            if(index == 2) {
                CD cd = new CD();
                cd.Nhap();
                listcd.add(cd);
            }
            if(index == 3) {
                Magazine m = new Magazine();
                m.Nhap();
                listmgz.add(m);
            }
        } while(index != 4);
        bi.Nhap();
        sc.nextLine();
        System.out.print("Enter Day Borrowed ");
        DayBorrowed.Nhap();
        do {
            System.out.print("Enter PayDay ");
            PayDay.Nhap();
            if(PayDay.Check(PayDay, DayBorrowed) == 0)
                System.out.println("Error PayDay. Please Retype!");
        } while(PayDay.Check(PayDay, DayBorrowed) == 0);
    }
    public void Xuat() {
        System.out.println("\nCode Of Loan Slip: " + Code);
        System.out.print("Day Borrow: ");
        DayBorrowed.Xuat();
        System.out.print("PayDay: ");
        PayDay.Xuat();
        bi.Xuat();
        int n = listbook.size();
        int m = listcd.size();
        int b = listmgz.size();
        if(n > 0) System.out.println("\n-- Book xx");
        for(int i = 0; i < n; i++) {
            listbook.get(i).Xuat();
        }
        if(m > 0) System.out.println("\n-- CD xx");
        for(int j = 0; j < m; j++) {
            listcd.get(j).Xuat();
        }
        if(b > 0) System.out.println("\n-- Magazine xx");
        for(int k = 0; k < b; k++) {
            listmgz.get(k).Xuat();
        }
    }
}
