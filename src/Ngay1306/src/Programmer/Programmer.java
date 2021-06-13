package Programmer;

import java.util.*;
import Employee.Employee;

public class Programmer extends Employee {

	Scanner sc = new Scanner(System.in);

	double bonus;
	int OTMoney;

	public double getBonus() {
		return bonus;
	}

	public void setBonus(double bonus) {
		this.bonus = bonus;
	}

	public int getOTMoney() {
		return OTMoney;
	}

	public void setOTMoney(int oTMoney) {
		OTMoney = oTMoney;
	}

	public double getPayment() {
		return getBasicSalary() + bonus + OTMoney * getBasicSalary() / 24;
	}

	public Programmer(String name, String code, int id, double bonus, int OTMoney) {
		super(name, code, id);
		this.bonus = bonus;
		this.OTMoney = OTMoney;
	}

	public Programmer() {
	}

	public void input() {
		super.input();
		System.out.println("Enter bonus: ");
		bonus = sc.nextDouble();
		System.out.println("Enter OTMoney: ");
		OTMoney = sc.nextInt();
	}

	public double getBasicSalary() {
		switch (getCode()) {
			case "1":
				return 25000000;
			case "2":
				return 13000000;
			case "3":
				return 600000;
			default:
				return 0;
		}
	}

	public String toString() {
		return super.toString() + ", bonus = " + this.bonus + ", OTMoney = " + this.OTMoney;
	}

}
