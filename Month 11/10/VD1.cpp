#include <vector>
#include<iostream>
using namespace std;
int main()
{		
	vector <int> v;
	v.push_back(10);
	v.push_back(20);
	
	vector <float> f;
	f.push_back(101.3F);
	f.push_back(101.222F); 
	
	for(int i=0;i< v.size();i++)
	cout<<v[i]<<endl;
	
	vector <int>::iterator it;
	for(it=v.begin(); it<v.end();it++)
	cout<<*it<<endl;

}

