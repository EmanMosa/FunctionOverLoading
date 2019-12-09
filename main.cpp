
#include <string>
#include <iostream>
#include <vector>
#include "H.h"
using namespace std;


int Function:: sum(<#vector<int> intVector#>){
   int sum  = 0;
    for (auto x : intVector){
        sum=sum+x;
    }
    return sum;
  
}

double Function::sum(vector<double>Vector>){
    double sum=0;
     for (auto x : intVector){
           sum=sum+x;
       }
    return sum;

}

string Function::sum(vector<string>Vector>){
    string sum="";
    for (auto x : intVector){
        sum=sum+x;
    }

    return sum;

}




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
int Function::STD(vector<int>intVector)
{
    int sum = 0, mean, standardDeviation = 0;
    int i;
    for(i = 0; i < intVector.size (); ++i)
    {
        sum += intVector[i];
    }
    mean = sum/intVector.size();
    for(i = 0; i < intVector.size(); ++i)
        standardDeviation += pow(intVector[i] - mean, 2);
    return sqrt(standardDeviation / intVector.size
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
