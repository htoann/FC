package CarList;

import Car.Car;

public class CarList {
  public void inputCar(Car list[], int n) {
    for (int i = 0; i < n; i++) {
      list[i] = new Car();
      System.out.println("Car " + "[" + (i + 1) + "]" + ": ");
      list[i].input();
    }
  }

  public void outputCar(Car list[], int n) {
    for (int i = 0; i < n; i++) {
      System.out.print("Car " + "[" + (i + 1) + "]" + ": ");
      list[i].output();
    }
  }

  public void sort(Car list[], int n) {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (list[i].getPriceWithVAT() > list[j].getPriceWithVAT()) {
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

  public float sumOfCash(Car list[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
      sum += list[i].getPriceWithVAT();
    }
    return sum;
  }

  public void maxCash(Car list[], int n) {
    float max = list[0].getPriceWithoutVAT();
    for (int i = 0; i < n; i++) {
      if (list[i].getPriceWithoutVAT() > max) {
        max = list[i].getPriceWithoutVAT();
      }
    }
  }

  public void searchByName(String x, Car list[], int n) {
    int check = 0;
    for (int i = 0; i < n; i++) {
      if (x.equals(list[i].getSource())) {
        check = 1;
        list[i].output();
      }
    }
    if (check == 0) {
      System.out.print("Dont have any car");
    }
  }
}
