package Ngay0206;

import java.util.*;

//abstract class
abstract class person {
  int id;
  String name;

  // non-method abstract
  void input() {
    Scanner objSc = new Scanner(System.in);
    System.out.print("id:");
    this.id = objSc.nextInt();
    objSc.nextLine();

    System.out.print("name:");
    this.name = objSc.nextLine();
  }

  void output() {
    System.out.println("id " + this.id + "name " + this.name);
  }

  // abtract method
  abstract void bonus();
}

class student extends person {
  int studId;
  float mark;

  void bonus() {
    if (mark >= 3.5)
      System.out.println("Thuong 15 trieu!");
    else
      System.out.println("Khong thuong!");
  }
}

class lecturer extends person {
  int paper;
  int lecId;

  void bonus() {
    if (paper >= 3)
      System.out.println("Thuong 50 trieu!");
    System.out.println("Kg co thuong!");
  }

}

public class App {

  public static void main(String[] args) {
    student objSt = new student();
    objSt.input();
    objSt.output();
    objSt.bonus();

    lecturer objL = new lecturer();
    objL.input();
    objL.output();
    objL.bonus();
  }

}
