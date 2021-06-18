import java.io.*;
import java.util.*;

public class Employee {
	int id;
	String name;
	double Salary;

	public void input() throws IOException {
		Scanner sc = new Scanner(System.in);
		File f = new File("D:\\tmp4.txt");
		FileWriter fw = new FileWriter(f);
		for (int i = 0; i < 2; i++) {
			try {
				System.out.println("Enter id: ");
				id = sc.nextInt();
				sc.nextLine();
				System.out.println("Enter name: ");
				name = sc.nextLine();
				System.out.println("Enter salary: ");
				Salary = sc.nextDouble();
				fw.write("id = " + id + " ,name = " + name +" ,salary = "+  CalSalary() + "\n");
			} catch (FileNotFoundException e) {
				e.printStackTrace();
			}
		}
		fw.close();
		
	}

	public double CalSalary() {
		return (Salary + 100) * 1.2;
	}

	public void output() throws IOException {
		File f = new File("D:\\tmp4.txt");
		FileReader fr = new FileReader(f);
		BufferedReader br = new BufferedReader(fr);
		String s;
		try {
			while ((s = br.readLine()) != null) {
				System.out.println(s);
			}
			System.out.println("Successful!");
			
		} catch (FileNotFoundException e) {
			e.printStackTrace();
			br.close();
		}

	}

	public static void main(String[] args) throws IOException {
		Employee x = new Employee();
		x.input();
		x.output();
	}
}
