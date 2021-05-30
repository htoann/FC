package Employee;

import java.util.*;

public class Employee {
  public static Scanner sc = new Scanner(System.in);

  int Id;
  String Name;
  float Salary;

  float CalculateSalary() {
    return 0;
  }

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

  void output(float SalaryGrading, float BenefitGrading) {
    System.out.println("SalaryGrading: " + SalaryGrading);
    System.out.println("BenefitGrading: " + BenefitGrading);
  }

  public class RegularEmployee extends Employee {
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

    double calculateSalary() {
      return 1000000 * (1.0 + SalaryGrading + BenefitGrading);
    }

    void input() {
      super.input();
      System.out.print("Enter SalaryGrading: ");
      SalaryGrading = sc.nextFloat();
      System.out.print("Enter BenefitGrading: ");
      BenefitGrading = sc.nextFloat();
    }
  }

  public class ContractStaff extends Employee {
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

    double calculateSalary() {
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

  public static class EmployeeList {
    Employee list[] = new Employee[100];
    int n = 0;
    char chon, loai;

    void input() {
      for (int i = 0; i < n; i++) {
        list[i] = new Employee();
        System.out.println("Employee " + (i + 1) + ": ");
        list[i].input();
        list[i].CalculateSalary();
      }
    }

    void output(Employee[] list, int n) {
      for (int i = 0; i < n; i++) {
        System.out.print("Employee " + (i + 1) + ": ");
        list[i].output();
      }
    }

    public void swap(Employee a, Employee b) {
      Employee temp = new Employee();
      temp = a;
      a = b;
      b = temp;
    }

    void sort(Employee[] list, int n) {
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (list[i].CalculateSalary() < list[j].CalculateSalary()) {
            swap(list[i], list[j]);
          }
        }
      }
      System.out.println("Sorting list of Employees increases by the salary: ");
      for (int i = 0; i < n; i++) {
        list[i].output();
        System.out.println("Salary = " + list[i].CalculateSalary());
      }
    }

    void maxSalary(Employee[] list, int n) {
      float max = 0;
      for (int i = 0; i < n; i++) {
        if (list[i].CalculateSalary() > max) {
          max = list[i].CalculateSalary();
        }
      }

      for (int i = 0; i < n; i++) {
        if (list[i].CalculateSalary() == max) {
          System.out.print("The Employees that have the highest salary in the list of Employees: ");
          list[i].output();
          System.out.println("Max = " + max);
        }
      }
    }
  }

  public static void main(String[] args) throws Exception {
    // int n = 10;
    // Employee[] emp = new Employee[n + 1];
    // EmployeeList list = new EmployeeList();
    // list.input(emp, n);
    // System.out.println("List Employee: ");
    // list.output(emp, n);
    // list.sort(emp, n);
    // list.maxSalary(emp, n);
  }
}
