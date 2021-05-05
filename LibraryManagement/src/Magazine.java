public class Magazine extends Publications {
    int NumberOfPublications;
    Publications p = new Publications();
    public void Nhap() {
        p.Nhap();
        do {
            System.out.print("Enter Number Publications: ");
            NumberOfPublications = sc.nextInt();
            if(NumberOfPublications < 0) 
                System.out.println("Error");
        } while(NumberOfPublications < 0);
    }
    public void Xuat() {
        p.Xuat();
        System.out.println("Number Publications: " + NumberOfPublications);
    }
}