public class App {
    public static void main(String[] args) throws Exception {
        StudentList l = new StudentList();
        l.input();
        l.output();
        System.out.println("Sau khi sort");
        l.sort();
        l.output();
        l.goodCMU();
    }
}