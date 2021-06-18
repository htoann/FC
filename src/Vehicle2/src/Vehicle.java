package Vehicle2.src;

import java.util.Scanner;

public abstract class Vehicle {
  public Vehicle() {
  }

  public Vehicle(String color, int speed) {
    this.color = color;
    this.speed = speed;
  }

  String color;

  public String getColor() {
    return color;
  }

  public void setColor(String color) {
    this.color = color;
  }

  public int getSpeed() {
    return speed;
  }

  public void setSpeed(int speed) {
    this.speed = speed;
  }

  int speed;

  abstract void go();

  abstract void changecolor();

  public void input() {
    Scanner sc = new Scanner(System.in);
    speed = sc.nextInt();
    sc.nextLine();
    color = sc.nextLine();
  }
}
