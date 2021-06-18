public class Bicycle extends Vehicle {
  boolean electrical;

  public Bicycle(int numberOfWheels, int speed, String color, double distance, boolean electrical) {
    super(numberOfWheels, speed, color, distance);
    this.electrical = electrical;
  }

  public Bicycle() {
  }

  String needToRecharge() {
    if (electrical && distance > 60) {
      return "Need to recharge bateries";
    } else {
      return "Don't need to recharge bateries";
    }
  }

  public void display() {
    System.out.println("This electrical bicycle have: " + numberOfWheels + " wheels, color : " + color + " take "
        + timeToMove() + " hours to move the distance: " + distance + " km and " + needToRecharge());
  }

}
