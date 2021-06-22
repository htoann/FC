import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        double radius;
        System.out.println("Enter radius: ");
        radius = sc.nextDouble();
        if(radius < 0) {
            System.out.println("N/A");
            return;
        }
        System.out.println("Are = " + 3.14 * (radius * radius));
    }
}
