public abstract class Vehicle {
  int numberOfWheels;
  int speed;
  String color;
  double distance;

  public Vehicle(int numberOfWheels, int speed, String color, double distance) {
    this.numberOfWheels = numberOfWheels;
    this.speed = speed;
    this.color = color;
    this.distance = distance;
  }

  public Vehicle() {
  }

  public abstract void display();

  public double timeToMove() {
    return (double) distance / speed;
  }

}
