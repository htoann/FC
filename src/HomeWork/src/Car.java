public class Car extends Vehicle {
  double gasVolume;

  public Car(int numberOfWheels, int speed, String color, double distance, double gasVolume) {
    super(numberOfWheels, speed, color, distance);
    this.gasVolume = gasVolume;
  }

  public Car() {
  }

  public void display() {
    System.out.println("This car have: " + numberOfWheels + " wheels, color:" + color + " take " + timeToMove()
        + " hours to move the distance: " + distance + " km, with speed " + speed + " km/h and gas volume is "
        + calulateDistancePerGas());

  }

  public double calulateDistancePerGas() {
    return gasVolume;
  }

}
