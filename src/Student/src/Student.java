
import java.util.*;
import java.io.*;

class student {
	String studentID;
	String name;
	float avg;

	student() {
		this.studentID = "";
		this.name = "";
		this.avg = 0f;

	}

	student(String id, String name, float avg) {
		this.studentID = id;
		this.name = name;
		this.avg = avg;

	}

	public void input() {
		Scanner objSc = new Scanner(System.in);
		System.out.println("Input student ID: ");
		this.studentID = objSc.nextLine();
		System.out.println("Input name: ");
		this.name = objSc.nextLine();
		System.out.println("Input avg: ");
		this.avg = objSc.nextFloat();
	}

	public void output() {
		System.out.println("ID : " + this.studentID);
		System.out.println("Name : " + this.name);
		System.out.println("Avg : " + this.avg);
	}

	@Override
	public String toString() {
		return this.studentID + " " + this.name + " " + this.avg + "\n";
	}
}

class studentList {
	public void Input(student[] st, int n) {
		for (int i = 0; i < n; i++) {
			st[i] = new student();
			System.out.println("Student " + (i + 1) + ": ");
			st[i].input();
		}
	}

	public void Output(student[] st, int n) {
		for (int i = 0; i < n; i++) {
			System.out.println("Student " + (i + 1) + ": ");
			st[i].output();
		}
	}

	public void overrideFile(student[] st, int n) throws IOException {
		File x = new File("D:\\input.txt");
		try {
			Formatter f = new Formatter("D:\\input.txt"); // Tạo mới và viết vào file
			for (int i = 0; i < n; i++) {
				f.format(st[i].toString());
			}
			f.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
	}

	public void readFile() throws IOException {
		File x = new File("D:\\input.txt");
		FileReader fr = new FileReader(x);
		BufferedReader br = new BufferedReader(fr);
		String str;
		System.out.println("Noi dung file: ");
		try {
			while ((str = br.readLine()) != null) {
				System.out.println(str);
			}
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		br.close();
	}
}

public class Student {
	public static void main(String[] args) throws Exception {
		int n;
		Scanner sc = new Scanner(System.in);
		File x = new File("D:\\input.txt");
		System.out.println("Enter number of Student: ");
		n = sc.nextInt();
		student[] st = new student[n];
		studentList sl = new studentList();
		sl.Input(st, n);
		sl.Output(st, n);
		sl.overrideFile(st, n);
		sl.readFile();
	}
}
