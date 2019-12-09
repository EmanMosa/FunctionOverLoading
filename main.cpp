
#include <string>
#include <iostream>
#include <vector>
#include "header.h"
using namespace std;



int main() {
	string x;
	Function f1;
	for (int i = 0; i < 10; i++) {
		cout << "please enter A vlaue " << i+1<<endl;
		cin >> x;
		f1.stringVector.push_back(x);

	}
	cout<<f1.median(f1.stringVector);
}
