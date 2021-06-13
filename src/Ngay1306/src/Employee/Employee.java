package Employee;

import java.util.*;

public abstract class Employee {

	int id;
	String name;
	String code;

	public abstract double getPayment();

	public abstract double getBasicSalary();

	public Employee() {

	}

	public Employee(String name, String code, int id) {
		this.id = id;
		this.name = name;
		this.code = code;
	}

	public Employee(String name, int id) {
		this.id = id;
		this.name = name;
	}

	public void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter id: ");
		id = sc.nextInt();
		System.out.println("Enter name: ");
		name = sc.nextLine();
		System.out.println("Enter code: ");
		code = sc.nextLine();
	};

	public String toString() {
		return "Employee [code=" + code + ", id=" + id + ", name=" + name + "]";
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getCode() {
		return code;
	}

	public void setCode(String code) {
		this.code = code;
	}
}
