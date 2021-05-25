package Ngay2505;

import java.util.*;

public class employee {
  public static Scanner sc = new Scanner(System.in);

  int Id;
  String Name;
  float Salary;
  float SalaryGrading;
  float BenefitGrading;

  void input() {
    System.out.print("Enter ID: ");
    Id = sc.nextInt();
    sc.nextLine();
    System.out.print("Enter Name: ");
    Name = sc.nextLine();
    System.out.print("Enter Salary: ");
    Salary = sc.nextFloat();
    System.out.print("Enter SalaryGrading: ");
    SalaryGrading = sc.nextFloat();
    System.out.print("Enter BenefitGrading: ");
    BenefitGrading = sc.nextFloat();
  }

  void output() {
    System.out.print("ID: " + Id);
    System.out.print(" Name: " + Name);
    System.out.println(" Salary: " + Salary);
  }

  float CalculateSalary() {
    return 100 * (1 + SalaryGrading + BenefitGrading);
  }

  void output(float SalaryGrading, float BenefitGrading) {
    System.out.println("SalaryGrading: " + SalaryGrading);
    System.out.println("BenefitGrading: " + BenefitGrading);
  }

  public static class employeeList {
    void input(employee[] list, int n) {
      for (int i = 0; i < n; i++) {
        list[i] = new employee();
        System.out.println("Employee " + (i + 1) + ": ");
        list[i].input();
        list[i].CalculateSalary();
      }
    }

    void output(employee[] list, int n) {
      for (int i = 0; i < n; i++) {
        System.out.print("Employee " + (i + 1) + ": ");
        list[i].output();
        list[i].output(list[i].SalaryGrading, list[i].BenefitGrading);
      }
    }

    public void swap(employee a, employee b) {
      employee temp = new employee();
      temp = a;
      a = b;
      b = temp;
    }

    void sort(employee[] list, int n) {
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (list[i].CalculateSalary() < list[j].CalculateSalary()) {
            swap(list[i], list[j]);
          }
        }
      }
      System.out.println("Sorting list of employees increases by the salary: ");
      for (int i = 0; i < n; i++) {
        list[i].output();
        System.out.println("Salary = " + list[i].CalculateSalary());
      }
    }

    void maxSalary(employee[] list, int n) {
      float max = 0;
      for (int i = 0; i < n; i++) {
        if (list[i].CalculateSalary() > max) {
          max = list[i].CalculateSalary();
        }
      }

      for (int i = 0; i < n; i++) {
        if (list[i].CalculateSalary() == max) {
          System.out.print("The employees that have the highest salary in the list of employees: ");
          list[i].output();
          System.out.println("Max = " + max);
        }
      }
    }
  }

  public static void main(String[] args) throws Exception {
    int n = 10;
    employee[] emp = new employee[n + 1];
    employeeList list = new employeeList();
    list.input(emp, n);
    System.out.println("List Employee: ");
    list.output(emp, n);
    list.sort(emp, n);
    list.maxSalary(emp, n);
  }
}
