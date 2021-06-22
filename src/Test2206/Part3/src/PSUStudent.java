public class PSUStudent extends Student {
  double marketing;
  double accounting;

  public PSUStudent(String name, int iD, double marketing, double accounting) {
    super(name, iD);
    this.marketing = marketing;
    this.accounting = accounting;
  }

  public PSUStudent() {
  }

  public double averageGrade() {
    return (double) (marketing + accounting) / 2;
  }

  public String toString() {
    return super.toString() + " PSUStudent [accounting=" + accounting + ", marketing=" + marketing + "]";
  }

  public void output() {
    super.output();
    System.out.println(" PSUStudent [accounting=" + accounting + ", marketing=" + marketing + "]");
  }
}
