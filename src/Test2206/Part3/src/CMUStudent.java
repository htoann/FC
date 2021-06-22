public class CMUStudent extends Student {
  double mathematics;
  double physics;
  double coding;

  public CMUStudent() {
  }

  public CMUStudent(String name, int iD, double mathematics, double physics, double coding) {
    super(name, iD);
    this.mathematics = mathematics;
    this.physics = physics;
    this.coding = coding;
  }

  public double averageGrade() {
    return (double) (mathematics + physics + coding) / 3;
  }

  @Override
  public String toString() {
    return super.toString() + " CMUStudent [coding=" + coding + ", mathematics=" + mathematics + ", physics=" + physics
        + "]";
  }

  public void output() {
    super.output();
    System.out.println(" CMUStudent [coding=" + coding + ", mathematics=" + mathematics + ", physics=" + physics + "]");
  }
}
