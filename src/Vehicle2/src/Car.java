package Vehicle2.src;

import java.util.Scanner;

public class Car extends Vehicle {
  public Car() {
    super();
  }

  public Car(String color, int speed, int sizeOfEngine, int numberOfDoors) {
    super(color, speed);
    this.sizeOfEngine = sizeOfEngine;
    this.numberOfDoors = numberOfDoors;
  }

  int sizeOfEngine;

  public int getSizeOfEngine() {
    return sizeOfEngine;
  }

  public void setSizeOfEngine(int sizeOfEngine) {
    this.sizeOfEngine = sizeOfEngine;
  }

  public int getNumberOfDoors() {
    return numberOfDoors;
  }

  public void setNumberOfDoors(int numberOfDoors) {
    this.numberOfDoors = numberOfDoors;
  }

  int numberOfDoors;

  public void go() {

    System.out.println("Car [color = " + super.color + ", speed = " + super.speed + ", numberOfDoors = " + numberOfDoors
        + ", sizeOfEngine = " + sizeOfEngine + "]");
  }

  @Override
  void changecolor() {

  }

  public void input() {
    Scanner sc = new Scanner(System.in);
    sizeOfEngine = sc.nextInt();
    numberOfDoors = sc.nextInt();
    super.input();
  }
}