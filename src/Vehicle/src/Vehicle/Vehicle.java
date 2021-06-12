package Vehicle;

import java.util.*;

public class Vehicle {

  String numberSign;

  public String getNumberSign() {
    return numberSign;
  }

  public void setNumberSign(String numberSign) {
    this.numberSign = numberSign;
  }

  public String getColor() {
    return color;
  }

  public void setColor(String color) {
    this.color = color;
  }

  public String getSource() {
    return source;
  }

  public void setSource(String source) {
    this.source = source;
  }

  String color;
  String source;

  public Vehicle() {
    this.numberSign = "";
    this.color = "";
    this.source = "";
  }

  public Vehicle(String numberSign, String color, String source) {
    this.numberSign = numberSign;
    this.color = color;
    this.source = source;
  }

  public float Cash() {
    return 0;
  };

  public void input() {
    Scanner sc = new Scanner(System.in);
    System.out.print("numberSign: ");
    this.numberSign = sc.nextLine();
    System.out.print("color: ");
    this.color = sc.nextLine();
    System.out.print("source: ");
    this.source = sc.nextLine();
  }

  public void output() {
    System.out.println("numberSign: " + " " + this.numberSign + " " + "color: " + " " + this.color + " " + "source: "
        + " " + this.source);
  }
}