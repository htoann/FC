public class App {
    public static void main(String[] args) throws Exception {
        // Company x = new Company();
        // x.Nhap();
        // System.out.println("\n---------------------\n");
        // x.Xuat();
        // FileInputStream in = new FileInputStream("INPUT.txt");
        // Scanner sc = new Scanner(in);
        // String cs = sc.nextLine();
        // in.close();
        // sc.close();
        LoanSlip x = new LoanSlip();
        x.Nhap();
        System.out.println("\n---------------------\n");
        x.Xuat();
    }
}