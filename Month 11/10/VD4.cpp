#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> S; 
	int baseNum, num, retail, n;
	cout << "Input number want to convert:";
	cin >> num;
	n = num;
	cout << "Input base number to convert: ";
	cin >> baseNum;
	while(num)
	{
		retail = num % baseNum;
		S.push(retail);
		num /= baseNum;
	}
	cout <<"Result:";
	while(!S.empty())
	{
		cout<<S.top();
		S.pop();
	}
}

