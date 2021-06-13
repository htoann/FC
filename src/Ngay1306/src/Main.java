import java.util.Scanner;

import Employee.Employee;
import Programmer.Programmer;
import SoftwarePM.SoftwarePM;

public class Main {
  Scanner sc = new Scanner(System.in);

  public static void main(String[] args) {
    Employee[] arr = new Employee[10];
    arr[0] = new Programmer("Can", "2", 5, 2, 13000000);
    arr[1] = new SoftwarePM("Khoi", "5", 10, 20000000);
    arr[2] = new Programmer("Huy", "3", 9, 2, 13000000);
    arr[3] = new SoftwarePM("Hung", "1", 4, 20000000);
    arr[4] = new SoftwarePM("Phuoc", "4", 2, 20000000);

    System.out.println("***********Sum the money to pay***********");
    long Sum = 0L;
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] != null)
        Sum += arr[i].getPayment();
    }
    System.out.println("Sum the money to pay: " + Sum);

    System.out.println("*********** before sort ***********");
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] != null)
        System.out.println(arr[i]);
    }
    // sort
    for (int i = 0; i < arr.length - 1; i++) {
      for (int j = arr.length - 1; j > i; j--) {
        if (arr[i] != null && arr[j] != null)
          if (arr[i].getName().compareTo(arr[j].getName()) > 0) {
            Employee temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
          }
      }
    }
    System.out.println("*********** after sort ***********");
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] != null)
        System.out.println(arr[i]);
    }

  }

}
