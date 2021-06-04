//package Vehicle.src;

import java.util.*;

abstract class Vehicle {
  String numberSign;
  String color;
  String source;

  Vehicle() {
    this.numberSign = "";
    this.color = "";
    this.source = "";
  }

  Vehicle(String numberSign, String color, String source) {
    this.numberSign = numberSign;
    this.color = color;
    this.source = source;
  }

  abstract float Cash();

  void input() {
    Scanner sc = new Scanner(System.in);
    System.out.print("numberSign: ");
    this.numberSign = sc.nextLine();
    System.out.print("color: ");
    this.color = sc.nextLine();
    System.out.print("source: ");
    this.source = sc.nextLine();
  }

  void output() {
    System.out.println("numberSign: " + " " + this.numberSign + " " + "color: " + " " + this.color + " " + "source: "
        + " " + this.source);
  }
}

class Car extends Vehicle {
  String manufacturer;
  float priceWithVAT;
  float priceWithoutVAT;

  Car() {
    super();
    this.manufacturer = "";
    this.priceWithVAT = 0;
    this.priceWithoutVAT = 0;
  }

  Car(String manufacturer, float priceWithVAT, float priceWithoutVAT) {
    super("", "", "");
    this.manufacturer = "";
    this.priceWithVAT = 0;
    this.priceWithoutVAT = 0;
  }

  float Cash() {
    if (this.priceWithoutVAT <= 200) {
      return this.priceWithoutVAT + priceWithoutVAT * 10 / 100;
    }
    return this.priceWithoutVAT + priceWithoutVAT * 15 / 100;
  }

  void input() {
    super.input();
    Scanner sc = new Scanner(System.in);
    System.out.print("manufacturer: ");
    this.manufacturer = sc.nextLine();
    System.out.print("priceWithVAT: ");
    this.priceWithVAT = sc.nextFloat();
    System.out.print("priceWithoutVAT: ");
    this.priceWithoutVAT = sc.nextFloat();
  }

  void output() {
    super.output();
    System.out.println("Cash: " + priceWithVAT);
  }
}

class CarList {
  void inputCar(Car list[], int n) {
    for (int i = 0; i < n; i++) {
      list[i] = new Car();
      System.out.println("Car " + "[" + (i + 1) + "]" + ": ");
      list[i].input();
    }
  }

  void outputCar(Car list[], int n) {
    for (int i = 0; i < n; i++) {
      System.out.print("Car " + "[" + (i + 1) + "]" + ": ");
      list[i].output();
    }
  }

  void sort(Car list[], int n) {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (list[i].priceWithVAT > list[j].priceWithVAT) {
          Car temp = new Car();
          temp = list[i];
          list[i] = list[j];
          list[j] = temp;
        }
      }
    }
    System.out.println("Sorting list of cars increases by the price with VAT: ");
    for (int i = 0; i < n; i++) {
      list[i].output();
    }
  }

  float sumOfCash(Car list[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
      sum += list[i].priceWithVAT;
    }
    return sum;
  }

  void maxCash(Car list[], int n) {
    float max = list[0].priceWithoutVAT;
    for (int i = 0; i < n; i++) {
      if (list[i].priceWithoutVAT > max) {
        max = list[i].priceWithoutVAT;
      }
    }
  }

  void searchByName(String x, Car list[], int n) {
    int check = 0;
    for (int i = 0; i < n; i++) {
      if (x.equals(list[i].source)) {
        check = 1;
        list[i].output();
      }
    }
    if (check == 0) {
      System.out.print("Dont have any car");
    }
  }
}

public class ThucHanh {
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
