import java.io.*;
import java.util.*;

class Employee {
	String ID, name;
	float salary;

	Employee() {
		this.ID = "";
		this.name = "";
		this.salary = 0;
	}

	public float calculateSalary() {
		return 0;
	}

	void input() {
		Scanner objSc = new Scanner(System.in);
		System.out.println("Input ID : ");
		ID = objSc.nextLine();

		System.out.println("Input NAME : ");
		name = objSc.nextLine();

		System.out.println("Input SALARY : ");
		salary = objSc.nextFloat();
	}

	void output() {
		System.out.println("ID : " + ID);
		System.out.println("NAME : " + name);
		System.out.println("SALARY : " + salary);
	}
}

class RegularEmployee extends Employee {
	float salaryGrading, benefitGrading;

	RegularEmployee() {
		this.salaryGrading = 0;
		this.benefitGrading = 0;
	}

	public float calculateSalary() {
		salary = 1000000 * (1 + salaryGrading + benefitGrading);
		return salary;
	}

	void input() {
		// goi input tu lop cha
		super.input();
		Scanner objSc = new Scanner(System.in);

		System.out.println("Input salaryGrading : ");
		salaryGrading = objSc.nextFloat();

		System.out.println("Input benefitGrading : ");
		benefitGrading = objSc.nextFloat();

	}
}

class ContractStaff extends Employee {
	float wage, workday, excesshoursGrading;

	ContractStaff() {
		this.wage = 0;
		this.workday = 0;
		this.excesshoursGrading = 0;
	}

	void input() {
		super.input();
		Scanner objSc = new Scanner(System.in);
		System.out.println("Input wage : ");
		wage = objSc.nextFloat();

		System.out.println("Input workday : ");
		workday = objSc.nextFloat();

		System.out.println("Input excesshoursGrading : ");
		excesshoursGrading = objSc.nextFloat();
	}

	public float calculateSalary() {
		salary = wage * workday * (1 + excesshoursGrading);
		return salary;
	}
}

class EmployeeList {
	Employee empList[] = new Employee[100];
	int n = 0;
	char chon, loai;

	void inputEmployee() throws IOException {
		do {
			System.out.println("Bien che hay hop dong (B/H) ? ");
			loai = (char) System.in.read();
			if (loai == 'B' || loai == 'b')
				empList[n] = new RegularEmployee();
			else
				empList[n] = new ContractStaff();
			System.in.skip(loai);
			empList[n++].input();
			System.out.println("Tiep tuc (C/K) ?");
			chon = (char) System.in.read();
			System.in.skip(chon);
			if ((n == 100) || (chon == 'K') || (chon == 'k'))
				break;
		} while (true);
	}

	void outputEmployee() {
		for (int i = 0; i < n; i++) {
			System.out.println("ID " + empList[i].ID);
			System.out.println("SALARY " + empList[i].salary);
		}
	}
}

// public class EmployeeThucHanh{

// public static void main(String[] args) throws IOException {
// EmployeeList objEmp = new EmployeeList();
// objEmp.inputEmployee();
// objEmp.outputEmployee();

// }

// }
