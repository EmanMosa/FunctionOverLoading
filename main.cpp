
#include <string>
#include <iostream>
#include <vector>
#include "header.h"
using namespace std;



int main() {
	int x;
	Function f1;
	for (int i = 0; i < 10; i++) {
		cout << "please enter A vlaue " << i+1<<endl;
		cin >> x;
		f1.intVector.push_back(x);

	}
	cout<<f1.median(f1.intVector)<<endl;
	cout << f1.max(f1.intVector) << endl;
	cout << f1.min(f1.intVector) << endl;
	cout << f1.STD(f1.intVector) << endl;
	cout << f1.sum(f1.intVector) << endl;
	cout << f1.count(f1.intVector) << endl;


}
