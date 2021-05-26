package Extend;

import java.util.*;

class person {
	int id;
	String name;

	// constructor
	person() {
		this.id = 0;
		this.name = "";
	}

	person(int id, String name) {
		this.id = id;
		this.name = name;
	}

	void input() {
		Scanner objSc = new Scanner(System.in);
		System.out.print("id:");
		this.id = objSc.nextInt();
		objSc.nextLine();
		System.out.print("name:");
		this.name = objSc.nextLine();
	}

	void output() {
		System.out.println("id " + " " + this.id + " " + "Name " + " " + this.name);
	}
}

// class student thua ke person
class student extends person {
	int studId;

	// constructor
	student() {
		// super goi default constructor cua lop cha
		super();
		this.studId = 0;
	}

	student(int studId) {
		// super goi constructor co tham so cua lop cha
		super(1, "can");
		this.studId = studId;
	}

	// method overriding
	void input() {
		// dung super goi phuong thuc lop cha
		super.input();
		Scanner objSc = new Scanner(System.in);
		System.out.print("student id:");
		this.studId = objSc.nextInt();
	}

	void output() {
		// dung super goi phuong thuc lop cha
		super.output();
		System.out.println("student id " + this.studId);
	}
}

public class Bai1 {
	public static void main(String[] args) {
		student objSt1 = new student(999);
		objSt1.input();
		objSt1.output();

		student objSt2 = new student(10);
		objSt2.input();
		objSt2.output();
	}
}
