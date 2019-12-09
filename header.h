#ifndef __HEADER_H__
#define __HEADER_H__
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
	int max(vector<int>Vector);//Noor
	int min(vector<int>Vector);
	int sum(vector<int>Vector);
	int avg(vector<int>Vector);
	int median(vector<int>Vector);
	double STD(vector<int>Vector);
	int count(vector<int>Vector);
	string max(vector<string>Vector);//Noor
	string min(vector<string>Vector);
	string sum(vector<string>Vector);
	string avg(vector<string>Vector);
	string median(vector<string>Vector);
	//string STD(vector<string>Vector);
	int count(vector<string>Vector);
	double max(vector<double>Vector);//Noor
	double min(vector<double>Vector);
	double sum(vector<double>Vector);
	double avg(vector<double>Vector);
	double median(vector<double>Vector);
	double STD(vector<double>Vector);
	int count(vector<double>Vector);

};


#endif