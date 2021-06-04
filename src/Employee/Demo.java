package Employee;

import java.util.*;

abstract class Employee {
  public static Scanner sc = new Scanner(System.in);

  int Id;
  String Name;
  float Salary;

  void input() {
    System.out.print("Enter ID: ");
    Id = sc.nextInt();
    sc.nextLine();
    System.out.print("Enter Name: ");
    Name = sc.nextLine();
    System.out.print("Enter Salary: ");
    Salary = sc.nextFloat();
  }

  void output() {
    System.out.print("ID: " + Id);
    System.out.print(" Name: " + Name);
    System.out.println(" Salary: " + Salary);
  }

  abstract float calculateSalary();

  void output(float SalaryGrading, float BenefitGrading) {
    System.out.println("SalaryGrading: " + SalaryGrading);
    System.out.println("BenefitGrading: " + BenefitGrading);
  }
}

class RegularEmployee extends Employee {
  float SalaryGrading;
  float BenefitGrading;

  RegularEmployee() {
    this.SalaryGrading = 0.0f;
    this.BenefitGrading = 0.0f;
  }

  RegularEmployee(float SalaryGrading, float BenefitGrading) {
    this.SalaryGrading = SalaryGrading;
    this.BenefitGrading = BenefitGrading;
  }

  float calculateSalary() {
    return (float) (1000000 * (1.0 + SalaryGrading + BenefitGrading));
  }

  void input() {
    super.input();
    System.out.print("Enter SalaryGrading: ");
    SalaryGrading = sc.nextFloat();
    System.out.print("Enter BenefitGrading: ");
    BenefitGrading = sc.nextFloat();
  }
}

class ContractStaff extends Employee {
  float wage;
  float workday;
  float excessHoursGrading;

  ContractStaff() {
    this.wage = 0;
    this.workday = 0;
  }

  ContractStaff(float wage, float workday, float excessHoursGrading) {
    this.wage = wage;
    this.workday = workday;
    this.excessHoursGrading = excessHoursGrading;
  }

  float calculateSalary() {
    return wage * workday * (1 + excessHoursGrading);
  }

  void input() {
    super.input();
    System.out.print("Enter wage: ");
    wage = sc.nextFloat();
    System.out.print("Enter workday: ");
    workday = sc.nextFloat();
    System.out.print("Enter excessHoursGrading: ");
    excessHoursGrading = sc.nextFloat();
  }
}

class EmployeeList {
  public static Scanner sc = new Scanner(System.in);
  Employee list[] = new Employee[100];
  int n = 0;
  char chon, loai;

  void inputList() {
    do {
      System.out.println("Bien che hay hop dong (B/H) ? ");
      loai = sc.next().charAt(0);
      if (loai == 'B' || loai == 'b')
        list[n] = new RegularEmployee();
      else
        list[n] = new ContractStaff();
      list[n++].input();
      System.out.println("Tiep tuc (C/K) ?");
      chon = sc.next().charAt(0);
      if ((n == 100) || (chon == 'K') || (chon == 'k'))
        break;
    } while (true);
  }

  void outputList() {
    for (int i = 0; i < n; i++) {
      System.out.print("Employee " + (i + 1) + ": ");
      list[i].output();
    }
  }

  public void swap(Employee a, Employee b) {
    // Employee temp = new Employee();
    // temp = a;
    // a = b;
    // b = temp;
  }

  void sort() {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (list[i].calculateSalary() < list[j].calculateSalary()) {
          swap(list[i], list[j]);
        }
      }
    }
    System.out.println("Sorting list of Employees increases by the salary: ");
    for (int i = 0; i < n; i++) {
      list[i].output();
      System.out.println("Salary = " + list[i].calculateSalary());
    }
  }

  void maxSalary() {
    double max = 0;
    for (int i = 0; i < n; i++) {
      if (list[i].calculateSalary() > max) {
        max = list[i].calculateSalary();
      }
    }

    for (int i = 0; i < n; i++) {
      if (list[i].calculateSalary() == max) {
        System.out.print("The Employees that have the highest salary in the list of Employees: ");
        list[i].output();
        System.out.println("Max = " + max);
      }
    }
  }
}

public class Demo {
  public static void main(String[] args) throws Exception {
    EmployeeList list = new EmployeeList();
    list.inputList();
    System.out.println("List Employee: ");
    list.outputList();
    list.sort();
    list.maxSalary();
  }
}
