package EmployeePK;

import java.util.*;

abstract class Employee {
  int id, code;
  String name;

  @Override
  public String toString() {
    return "Employee [code=" + code + ", id=" + id + ", name=" + name + "]";
  }

  public Employee() {
    this.name = "";
    this.id = 0;
    this.code = 0;
  }

  public Employee(String name, int id, int code) {
    this.name = name;
    this.id = id;
    this.code = code;
  }

  public abstract double getPayment();

  public abstract double getBasicSalary();

  public int getId() {
    return id;
  }

  public void setId(int id) {
    this.id = id;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public int getCode() {
    return code;
  }

  public void setCode(int code) {
    this.code = code;
  }

  public void input() {
    Scanner cs = new Scanner(System.in);
    System.out.println("Input Name : ");
    this.name = cs.nextLine();
    System.out.println("Input Id : ");
    this.id = cs.nextInt();
    System.out.println("Input Code (1, 2, 3): ");
    this.code = cs.nextInt();
  }
}

class SoftwarePM extends Employee {
  @Override
  public String toString() {
    return super.toString() + " SoftwarePM [bonus=" + bonus + "]";
  }

  double bonus;

  public SoftwarePM() {
    this.bonus = 0;
  }

  public SoftwarePM(String name, int id, int code, double bonus) {
    super(name, code, id);
    this.bonus = bonus;
  }

  public void input() {
    super.input();
    Scanner cs = new Scanner(System.in);
    System.out.println("Input bonus : ");
    this.bonus = cs.nextDouble();
  }

  public double getBasicSalary() {
    switch (getCode()) {
      case "1":
        return 30000000;
      case "2":
        return 20000000;
      case "3":
        return 3200000;
      default:
        return 0;
    }
  }

  public double getPayment() {
    return getBasicSalary() + bonus;
  }
}

class Programmer extends Employee {
  @Override
  public String toString() {
    return super.toString() + " Programmer [OTMoney=" + OTMoney + ", bonus=" + bonus + "]";
  }

  double bonus;
  int OTMoney;

  public Programmer() {
  }

  public Programmer(String name, int id, int code, int OTMoney, double bonus) {
    super(name, code, id);
    this.bonus = bonus;
    this.OTMoney = OTMoney;
  }

  public void input() {
    super.input();
    Scanner cs = new Scanner(System.in);
    System.out.println("Input Bonus : ");
    this.bonus = cs.nextDouble();
    System.out.println("Input OTMoney : ");
    this.OTMoney = cs.nextInt();
  }

  public double getPayment() {
    return getBasicSalary() + bonus + OTMoney * getBasicSalary() / 24;

  }

  public double getBasicSalary() {
    switch (getCode()) {
      case "1":
        return 25000000;
      case "2":
        return 13000000;
      case "3":
        return 600000;
      default:
        return 0;
    }
  }
}

class EmployeeList {
  int n = 0;
  Employee[] arr;

  void input() {
    Scanner sc = new Scanner(System.in);
    System.out.println("How many Employee?");
    n = sc.nextInt();
    arr = new Employee[n];
    for (int i = 0; i < n; i++) {
      System.out.println("Choose Employee type: \n1.SoftwarePM: \n2.Programmer:");
      int choose = sc.nextInt();
      if (choose == 1) {
        System.out.println("Enter name, id, code and bonus respective :");
        arr[i] = new SoftwarePM();
        arr[i].input();
      } else {
        System.out.println("Enter name, id, code, OTmoney and bonus respective :");
        arr[i] = new Programmer();
        arr[i].input();
      }
    }
  }

  void output() {
    for (int i = 0; i < n; i++) {
      System.out.println("       -Emplyee " + (i + 1) + "-");
      System.out.println("Name:" + arr[i].getName() + "   Id:" + arr[i].getId() + "   Payment:" + arr[i].getPayment());
    }
  }

  void sumMoney() {
    double sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i].getPayment();
    }
    System.out.println("   Sum the money to pay for these 5 Employees : \nThe money to pay " + sum);
  }

  void sort() {
    for (int i = 0; i < n - 1; i++) {
      for (int k = i + 1; k < n; k++) {
        if (arr[i].getPayment() > arr[k].getPayment()) {
          Employee t = arr[i];
          arr[i] = arr[k];
          arr[k] = t;
        }
      }
    }
    System.out.println("    Sorting list of Employee increases by the price with name (up to down)");
    for (int i = 0; i < arr.length; i++) {
      System.out.println((i + 1) + ". " + arr[i].getName());
    }
  }

}

public class EmployeePK {

  public static void main(String[] args) {
    Employee list[] = new Employee[10];
    list[0] = new Programmer("Can", 2, 5, 2, 13000000);
    list[1] = new SoftwarePM("Khoi", 5, 10, 20000000);
    list[2] = new Programmer("Huy", 3, 9, 2, 13000000);
    list[3] = new SoftwarePM("Hung", 1, 4, 20000000);
    list[4] = new SoftwarePM("Phuoc", 4, 2, 20000000);
    for (int i = 0; i < list.length; i++) {
      if (list[i] != null) {
        System.out.println(list[i]);
      }
    }
    // list.sumMoney();
    // list.sort();
  }

}
