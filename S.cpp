#include <string>
#include <iostream>
#include <vector>
#include "H.h"
using namespace std;
int Function:: midle(vector<int>intVector) {
	return 0;
}
string Function::midle(vector<string>intVector) {
	return "";
}
double Function::midle(vector<double>intVector) {
	return 0.0;
}
int Function::count(vector<int> intVector) {
	return intVector.size();

}
int Function::count(vector<string> stringVector) {
	return stringVector.size();

}
int Function::count(vector<double> doubleVector) {
	return doubleVector.size();

}

int main() {
	int x;
	Function f1;
	for (int i = 0; i < 10; i++) {
		cout << "please enter A vlaue " << i<<endl;
		cin >> x;
		f1.intVector.push_back(x);

	}
}