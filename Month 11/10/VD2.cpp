#include<iostream>
#include<vector>
using namespace std;
class point {
public:
	int x;
	int y;
	point(int a, int b) {
		x = a;
		y = b;
	}
	void Display() {
		cout<<x<<endl; cout<<y<<endl;
	}
};

int main() {
	point p(20, 80);
	vector <point> v;
	v.push_back(p);
}

