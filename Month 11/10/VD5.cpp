#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int myints[] = {10, 40, 30, 22, 34, 3, 21, 15};
	vector<int> myvector(myints, myints + 8);
	sort(myvector.begin(), myvector.end());
	cout <<"Sap xep tang dan "<< endl;
	for(int i = 0; i < myvector.size(); i++)
	cout << " " << myvector[i];
}

