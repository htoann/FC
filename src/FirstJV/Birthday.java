package FirstJV;

import java.util.*;

public class Birthday {
  public static Scanner sc = new Scanner(System.in);
  int day, month, year;

  Birthday() {
  }

  Birthday(int day, int month, int year) {
    this.day = day;
    this.month = month;
    this.year = year;
  }

  public int checkNamNhuan() {
    if (year % 400 == 0)
      return 1;
    if (year % 4 == 0 && year % 100 != 0)
      return 1;
    return 0;
  }

  public void Input() {
    do {
      System.out.print("Enter year: ");
      year = sc.nextInt();
      if (year < 1900 || year > 2999) {
        System.out.println("Invalid number of year. Try again!");
      } else {
        do {
          System.out.print("Enter month: ");
          month = sc.nextInt();
          if (month < 1 || month > 12) {
            System.out.println("Invalid number of month. Try again!");
          } else {
            int checkDay = 0;
            do {
              System.out.print("Enter day: ");
              day = sc.nextInt();
              if (day < 1 || day > 31) {
                System.out.println("Invalid number of day. Try again!");
              } else if ((month == 2 && day > 29 && checkNamNhuan() == 1)
                  || (month == 2 && day > 28 && checkNamNhuan() == 0)
                  || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
                System.out.println("Invalid number of day. Try again!");
              } else {
                checkDay = 1;
              }
            } while (checkDay != 1);
          }
        } while (month < 1 || month > 12);
      }
    } while (year < 1900 || year > 2999);
  }

  public int calYearOld() {
    return (Calendar.getInstance().get(Calendar.YEAR) - year);
  }

  public void Display() {
    System.out.println("Your birthday " + day + "/" + month + "/" + year);
  }

  public static void main(String[] args) throws Exception {
    Birthday b = new Birthday();
    b.Input();
    b.Display();
    System.out.println("You are: " + b.calYearOld() + " years old");

  }
}