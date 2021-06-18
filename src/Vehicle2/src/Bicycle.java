package Vehicle2.src;

import java.util.Scanner;

public class Bicycle extends Vehicle {
  public Bicycle() {
    super();
  }

  public Bicycle(String color, int speed, int numberOfWheels) {
    super(color, speed);
    this.numberOfWheels = numberOfWheels;
  }

  int numberOfWheels;

  public int getNumberOfWheels() {
    return numberOfWheels;
  }

  public void setNumberOfWheels(int numberOfWheels) {
    this.numberOfWheels = numberOfWheels;
  }

  public void go() {
    System.out.println(
        "Bicycle [color = " + super.color + ", speed = " + super.speed + ", numberOfWheels = " + numberOfWheels + "]");
  }

  @Override
  void changecolor() {

  }

  public void input() {
    Scanner sc = new Scanner(System.in);
    numberOfWheels = sc.nextInt();
    super.input();
  }
}