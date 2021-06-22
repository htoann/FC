import java.util.*;

public class StudentList {
  int n = 6;
  Student list[] = new Student[n];

  public void input() {
    Scanner sc = new Scanner(System.in);
    for (int i = 0; i < 4; i++) {
      System.out.println("Enter student " + (i + 1) + " - name, id, mathematics, physics, coding");
      list[i] = new CMUStudent("hello", sc.nextInt(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
    }
    for (int i = 4; i < n; i++) {
      System.out.println("Enter student " + (i + 1) + " - name, id, marketing, accounting");
      list[i] = new PSUStudent(sc.next(), sc.nextInt(), sc.nextDouble(), sc.nextDouble());
    }
  }

  public void sort() {
    Student x = list[0];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (list[i].averageGrade() > list[j].averageGrade()) {
          x = list[i];
          list[i] = list[j];
          list[j] = x;
        }
      }
    }
  }

  public void goodCMU() {
    int dem = 0;
    for (int i = 0; i < n; i++) {
      if (list[i].averageGrade() > 7f) {
        dem++;
      }
    }
    System.out.println("Number of CMU > 7: " + dem);
  }

  public void output() {
    for (int i = 0; i < n; i++) {
      list[i].output();
    }
  }
}
