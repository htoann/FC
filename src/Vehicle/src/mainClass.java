import CarList.CarList;
import Car.Car;

import java.util.*;

public class mainClass {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n;
    System.out.print("Nhap so luong xe: ");
    n = sc.nextInt();
    Car car[] = new Car[n + 1];
    CarList list = new CarList();
    list.inputCar(car, n);
    System.out.println("List car: ");
    list.outputCar(car, n);
    list.sort(car, n);
    System.out.println("Sorting list of cars increases: ");
    list.outputCar(car, n);
    System.out.println("Calculate the total of the price with VAT: " + list.sumOfCash(car, n));
    list.maxCash(car, n);
    String search;
    System.out.print("Nhap source car muon tim: ");
    search = sc.nextLine();
    list.searchByName(search, car, n);
  }
}
