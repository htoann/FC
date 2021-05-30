package Ngay2805;

import java.util.*;

public class ThucHanh {
  Scanner sc = new Scanner(System.in);

  class Vehicle {
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

    void input() {
      Scanner sc = new Scanner(System.in);
      System.out.print("numberSign: ");
      this.numberSign = sc.nextLine();
      sc.nextLine();
      System.out.print("color: ");
      this.color = sc.nextLine();
      sc.nextLine();
      System.out.print("source: ");
      this.source = sc.nextLine();
    }

    void output() {
      System.out.println("numberSign " + " " + this.numberSign + " " + "color " + " " + this.color + " " + "source "
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
      if (priceWithoutVAT <= 200) {
        return priceWithoutVAT + priceWithoutVAT * 10 / 100;
      }
      return priceWithoutVAT + priceWithoutVAT * 15 / 100;
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
  }

  class CarList {
    void inputCar(Car list[], int n) {
      for (int i = 0; i < n; i++) {
        list[i] = new Car();
        list[i].input();
      }
    }

    void outputCar(Car list[], int n) {
      for (int i = 0; i < n; i++) {
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
    }

    // float sumOfCash(Car list[], int n) {
    // float sum = 0;
    // for (int i = 0; i < n; i++) {
    // sum += list[i].priceWithVAT;
    // }
    // }

    void maxCash(Car list[], int n) {
      float max = list[0].priceWithoutVAT;
      for (int i = 0; i < n; i++) {
        if (list[i].priceWithoutVAT > max) {
          max = list[i].priceWithoutVAT;
        }
      }
      System.out.printf("Information of the cars that have the highest price without VAT :");
      for (int i = 0; i < n; i++) {
        if (list[i].priceWithoutVAT == max) {
          list[i].output();
        }
      }
    }

    void searchByName(String x, Car list[], int n) {
      for (int i = 0; i < n; i++) {
        if (x == list[i].source) {
          list[i].output();
        } else {
          System.out.printf("Don't have any car");
        }
      }
    }
  }

  public static void main(String[] args) throws Exception {
    // int n = 10;
    // Car car[] = new Car[n + 1];
    // CarList list = new CarList();
    // list.inputCar(car, n);
    // list.outputCar(car, n);
    // list.sort(car, n);
    // System.out.println("Sorting list of cars increases: ");
    // list.outputCar(car, n);
    // System.out.println("Calculate the total of the price with VAT: " +
    // list.sumOfCash(car, n));
    // list.maxCash(car, n);
    // String search;
    // list.searchByName(search, car, n);
  }
}
