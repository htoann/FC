package MidTest;

import java.util.*;

abstract class vehicle {
  String color;
  int speed;

  public vehicle(int speed, String color) {
    this.color = color;
    this.speed = speed;
  }

  public vehicle() {

  }

  public abstract void go();

  public void changecolor(String newColor) {
    color = newColor;
  }
}

class bicycle extends vehicle {

  int numberofwheels;

  public bicycle(int numberofwheels, int speed, String color) {
    super(speed, color);
    this.numberofwheels = numberofwheels;
  }

  public bicycle() {
  }

  public void go() {
    System.out.println("The " + color + " bicycle with " + numberofwheels + " wheels,go with speed =" + speed + "km/h");
  }
}

class car extends vehicle {

  int sizeOfEngine, numberofdoor;

  public car(int sizeOfEngine, int numberofdoor, int speed, String color) {
    super(speed, color);
    this.sizeOfEngine = sizeOfEngine;
    this.numberofdoor = numberofdoor;
  }

  public car() {

  }

  public void go() {
    System.out.println("The " + color + " car with " + numberofdoor + "of door,and engine" + sizeOfEngine
        + ",go with speed=" + speed + "km/h");
  }
}

class list {
  int n;
  vehicle[] a;

  public list() {

  }

  public void inputmang() {
    Scanner sc = new Scanner(System.in);
    System.out.println("how many vehicles in the list?:");
    n = sc.nextInt();
    a = new vehicle[n];

    for (int i = 0; i < a.length; i++) {
      System.out.println("Chon loai xe: \n1. Car \n2.bicycle");
      int choose = sc.nextInt();
      if (choose == '1') {
        System.out.println("Enter size of engine,number of doors,speed sng color repectively:");
        a[i] = new car(sc.nextInt(), sc.nextInt(), sc.nextInt(), sc.next());
      } else {
        System.out.println("Enter number of wheels,speed and color repectively:");
        a[i] = new bicycle(sc.nextInt(), sc.nextInt(), sc.next());
      }

    }
  }

  public void output1() {
    for (int i = 0; i < a.length; i++) {
      // a[i].go();
    }
  }

  public void sort() {
    int max = 0;
    for (int i = 0; i < a.length; i++) {
      if (max < a[i].speed)
        max = a[i].speed;
    }
    System.out.println("the satefy vehicle is:");
    for (int i = 0; i < a.length; i++) {
      if (max == a[i].speed)
        a[i].go();
    }
  }
}

public class Q2 {

  public static void main(String[] args) {
    list b = new list();
    b.inputmang();
    b.output1();
    b.sort();
  }
}