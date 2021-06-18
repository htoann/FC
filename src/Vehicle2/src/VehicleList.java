package Vehicle2.src;

import java.util.Scanner;

public class VehicleList {
  int n;
  Vehicle arrayOfVehicles[];

  public void input() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number of vehicles: ");
    n = sc.nextInt();
    arrayOfVehicles = new Vehicle[n];
    int choose;
    for (int i = 0; i < n; i++) {
      System.out.println("1. Car\n2. Bicycle ");
      choose = sc.nextInt();
      if (choose == 1) {
        arrayOfVehicles[i] = new Car();
        System.out.println("Enter size of engine, number of doors, speed and color respectively: ");
        arrayOfVehicles[i].input();
      } else {
        arrayOfVehicles[i] = new Bicycle();
        System.out.println("Enter number of wheels, speed and color respectively: ");
        arrayOfVehicles[i].input();
      }
    }
  }

  public void output() {
    for (int i = 0; i < n; i++) {
      arrayOfVehicles[i].go();
    }
  }

  public void safetyVehicle() {
    int min = arrayOfVehicles[0].speed;
    for (int i = 0; i < n; i++) {
      if (arrayOfVehicles[i].speed < min) {
        min = arrayOfVehicles[i].speed;
      }
    }
    for (int i = 0; i < n; i++) {
      if (arrayOfVehicles[i].speed == min) {
        System.out.println("The safety vehicle is: ");
        arrayOfVehicles[i].go();

      }
    }
  }
}
