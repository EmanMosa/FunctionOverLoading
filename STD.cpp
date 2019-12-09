#include "header.h"
#include "math.h"




int Function::STD(vector<int>Vector)
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
	return int(sqrt(standardDeviation / Vector.size()));
}

double Function::STD(vector<double>Vector)
{
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