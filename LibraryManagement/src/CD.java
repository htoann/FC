public class CD extends Publications{
    String PublishingAuthor;
    String Describe;
    Publications p = new Publications();
    public void Nhap() {
        p.Nhap();
        System.out.print("Enter Publishing Author: ");
        PublishingAuthor = sc.nextLine();
        System.out.print("Enter Describe: ");
        Describe = sc.nextLine();
    }
    public void Xuat() {
        p.Xuat();
        System.out.println("Publishing Author: " + PublishingAuthor);
        System.out.println("Describe: " + Describe);
    }
}
