import java.util.*;
import java.io.*;

public class VehicleList {
  Vehicle list[];
  int n;

  public void input() throws IOException {
    File f = new File("D:\\InputFile.txt");
    Scanner sc = new Scanner(f);
    int choose;
    try {
      while (sc.hasNextLine()) {
        n = sc.nextInt();
        list = new Vehicle[n];
        for (int i = 0; i < n; i++) {
          choose = sc.nextInt();
          if (choose == 1) {
            list[i] = new Car(sc.nextInt(), sc.nextInt(), sc.next(), sc.nextDouble(), sc.nextDouble());
          } else {
            list[i] = new Bicycle(sc.nextInt(), sc.nextInt(), sc.next(), sc.nextDouble(), sc.nextBoolean());
          }
        }
      }
      sc.close();

    } catch (InputMismatchException e) {
      System.out.print(e.getMessage());
    }
  }

  public void output() throws IOException {
    for (int i = 0; i < n; i++) {
      list[i].display();
    }
  }

  Vehicle fastestVehicle() {
    double min = list[0].timeToMove();
    for (int i = 0; i < n; i++) {
      if (list[i].timeToMove() < min) {
        min = list[i].timeToMove();
      }
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
      if (list[i].timeToMove() == min) {
        index = i;
      }
    }
    System.out.println("The vehicle fastest: ");
    return list[index];
  }
}
