package SoftwarePM;

import Employee.Employee;
import java.util.*;

public class SoftwarePM extends Employee {
	Scanner sc = new Scanner(System.in);

	double bonus;

	public double getBonus() {
		return bonus;
	}

	public void setBonus(double bonus) {
		this.bonus = bonus;
	}

	public SoftwarePM() {
	}

	public SoftwarePM(String name, String code, int id, double bonus) {
		super(name, code, id);
		this.bonus = bonus;
	}

	public void input() {
		super.input();
		System.out.println("Enter bonus: ");
		bonus = sc.nextDouble();
	}

	public double getPayment() {
		return getBasicSalary() + bonus;
	}

	public double getBasicSalary() {
		switch (getCode()) {
			case "1":
				return 30000000;
			case "2":
				return 20000000;
			case "3":
				return 3200000;
			default:
				return 0;
		}
	}

	public String toString() {
		return super.toString() + ", bonus = " + this.bonus;
	}
}
