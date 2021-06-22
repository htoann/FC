// package Part2;
import java.util.*;

public class Ex01 {
  public int check(int n) {
    if(n < 2) return 0;
    else if(n > 2) {
      if(n % 2 == 0) return 0;
      for(int i = 3; i < n; i+=2) {
        if(n % i == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  void display(int n) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter n: ");
    n = sc.nextInt();
    int i = 2;
    int dem = 0;
    while(dem < n) {
      if(check(i) == 1) {
          System.out.println(i + " ");
          dem++;
      }
      i++;
    }
  }
}
