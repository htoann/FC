public class App {
    public static void main(String[] args) throws Exception {
        VehicleList list = new VehicleList();
        list.input();
        list.output();
        list.fastestVehicle().display();
    }
}