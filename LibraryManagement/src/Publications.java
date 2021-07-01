import java.time.Year;
import java.util.Scanner;

public class Publications {
    Scanner sc = new Scanner(System.in);
    String Code, Intro;
    int PublishingYear;
    int Status;

    public void Nhap() {
        System.out.print("Enter Code Of Publications: ");
        Code = sc.nextLine();
        System.out.print("Enter Intro: ");
        Intro = sc.nextLine();
        do {
            System.out.print("Enter Publishing Year: ");
            PublishingYear = sc.nextInt();
            if (PublishingYear > Year.now().getValue())
                System.out.println("Error");
        } while (PublishingYear > Year.now().getValue());
        System.out.print("Enter Status: ");
        Status = sc.nextInt();
    }

    public void Xuat() {
        System.out.println("\nCode Of Publications: " + Code);
        System.out.println("Intro: " + Intro);
        System.out.println("Publishing Year: " + PublishingYear);
        System.out.println("Status: " + Status);
    }
}
