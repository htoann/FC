package Car;

import Vehicle.Vehicle;
import java.util.*;

public class Car extends Vehicle {
  public Car(String numberSign, String color, String source) {
    super(numberSign, color, source);
  }

  String manufacturer;

  public String getManufacturer() {
    return manufacturer;
  }

  public void setManufacturer(String manufacturer) {
    this.manufacturer = manufacturer;
  }

  public float getPriceWithVAT() {
    return priceWithVAT;
  }

  public void setPriceWithVAT(float priceWithVAT) {
    this.priceWithVAT = priceWithVAT;
  }

  public float getPriceWithoutVAT() {
    return priceWithoutVAT;
  }

  public void setPriceWithoutVAT(float priceWithoutVAT) {
    this.priceWithoutVAT = priceWithoutVAT;
  }

  float priceWithVAT;
  float priceWithoutVAT;

  public Car() {
    super();
    this.manufacturer = "";
    this.priceWithVAT = 0;
    this.priceWithoutVAT = 0;
  }

  public Car(String manufacturer, float priceWithVAT, float priceWithoutVAT) {
    super("", "", "");
    this.manufacturer = "";
    this.priceWithVAT = 0;
    this.priceWithoutVAT = 0;
  }

  public float Cash() {
    if (this.priceWithoutVAT <= 200) {
      return this.priceWithoutVAT + priceWithoutVAT * 10 / 100;
    }
    return this.priceWithoutVAT + priceWithoutVAT * 15 / 100;
  }

  public void input() {
    super.input();
    Scanner sc = new Scanner(System.in);
    System.out.print("manufacturer: ");
    this.manufacturer = sc.nextLine();
    System.out.print("priceWithVAT: ");
    this.priceWithVAT = sc.nextFloat();
    System.out.print("priceWithoutVAT: ");
    this.priceWithoutVAT = sc.nextFloat();
  }

  public void output() {
    super.output();
    System.out.println("Cash: " + priceWithVAT);
  }
}
