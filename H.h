#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::vector;
class Function {
public:
	vector<int>intVector;
	vector<string>stringVector;
	vector<double>doubleVector;
private:
	int max(vector<int>intVector);//Noor
	int min(vector<int>intVector);
	int sum(vector<int>intVector);
	int avg(vector<int>intVector);
	int midle(vector<int>intVector);
	int STD(vector<int>intVector);
	int count(vector<int>intVector);
	string max(vector<string>stringVector);//Noor
	string min(vector<string>stringVector);
	string sum(vector<string>stringVector);
	string avg(vector<string>stringVector);
	string midle(vector<string>stringVector);
	string STD(vector<string>stringVector);
	int count(vector<string>stringVector);
	double max(vector<double>doubleVector);//Noor
	double min(vector<double>doubleVector);
	double sum(vector<double>doubleVector);
	double avg(vector<double>doubleVector);
	double midle(vector<double>doubleVector);
	double STD(vector<double>doubleVector);
	int count(vector<double>doubleVector);

};