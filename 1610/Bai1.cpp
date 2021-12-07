 #include <iostream>
 #include <math.h>
 using namespace std;

 template <class T>
 class Array {
 	public:
	void input(T a[], int n) {
	 	for(int i = 0; i < n; i++) {
	 		cout << "a[" << (i + 1) << "]: ";
	 		cin >> a[i];
		 }
	}
	void output(T a[], int n) {
		for(int i = 0; i < n; i++) {
	 		cout << a[i] << " ";
		 }
	}
 };
 int main()
 {
 	cout << "Array type int\n";
 	int a[100];
 	int n = 5;
 	Array<int> x;
 	x.input(a, n);
 	x.output(a, n);
 	
 	cout << "\nArray type double\n";
 	double b[100];
 	Array<double> y;
 	y.input(b, n);
 	y.output(b, n);
 }

