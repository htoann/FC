
public abstract class Student {
  String name;
  int ID;

  public Student(String name, int iD) {
    this.name = name;
    ID = iD;
  }

  public Student() {
  }

  abstract double averageGrade();

  @Override
  public String toString() {
    return "Student [ID=" + ID + ", name=" + name + "]";
  }

  public int compareTo(Student s) {
    if (s.averageGrade() == this.averageGrade()) {
      return 0;
    } else if (s.averageGrade() < this.averageGrade()) {
      return 1;
    }
    return -1;
  }

  public void output() {
    System.out.print("Student [ID=" + ID + ", name=" + name + "]");
  }
}