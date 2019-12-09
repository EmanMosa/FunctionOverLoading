#include "header.h"
#include "math.h"




double Function::STD(vector<int>Vector)
{
	int sum = 0, mean, standardDeviation = 0;
	int i;
	for (i = 0; i < Vector.size(); ++i)
	{
		sum += Vector[i];
	}
	mean = sum / Vector.size();
	for (i = 0; i < Vector.size(); ++i)
		standardDeviation += pow(Vector[i] - mean, 2);
	return sqrt(standardDeviation / Vector.size());
}

double Function::STD(vector<double>Vector)
{
	//std::cout << "i'm here";
	double sum = 0, mean, standardDeviation = 0;
	int i;
	for (i = 0; i < Vector.size(); ++i)
	{
		sum += Vector[i];
	}
	mean = sum / Vector.size();
	for (i = 0; i < Vector.size(); ++i)
		standardDeviation += pow(Vector[i] - mean, 2);
	return sqrt(standardDeviation / Vector.size());
}