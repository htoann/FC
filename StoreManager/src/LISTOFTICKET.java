import java.util.ArrayList;
import java.util.Scanner;

public class LISTOFTICKET {
    ArrayList <PhieuChuan> listpc = new ArrayList<PhieuChuan>();
    ArrayList <PhieuBac> listpb = new ArrayList<PhieuBac>();
    ArrayList <PhieuVang> listpv = new ArrayList<PhieuVang>();
    int index;
    Scanner sc = new Scanner(System.in);
    public void Nhap() {
        do {
            System.out.println("\n----- Choose Type Of Ticket -----");
            System.out.println("\n1. Standard Ticket\n2. Silver Ticket\n3. Gold Ticket\n4. Issue Tickets");
            index = sc.nextInt();
            if(index == 1) {
                PhieuChuan pc = new PhieuChuan();
                pc.Nhap();
                listpc.add(pc);
            }
             if(index == 2) {
                PhieuBac pb = new PhieuBac();
                pb.Nhap();
                listpb.add(pb);
            }
            if(index == 3) {
                PhieuVang pv = new PhieuVang();
                pv.Nhap();
                listpv.add(pv);
            }
        } while(index != 4);
    }
    public void Xuat() {
        int n = listpc.size();
        if(n > 0) System.out.println("-> List Of Standard Ticket ->");
        for(int i = 0; i < n; i++)
            listpc.get(i).Xuat();
            System.out.println("\n");

        int m = listpb.size();
        if(m > 0) System.out.println("-> List Of Silver Ticket ->");
        for(int j = 0; j < m; j++)
            listpb.get(j).Xuat();

        int l = listpv.size();
        if(l > 0) System.out.println("-> List Of Gold Ticket ->");
        for(int k = 0; k < l; k++) {
            listpv.get(k).Xuat();
        }
    }
}
