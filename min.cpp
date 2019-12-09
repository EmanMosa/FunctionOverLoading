#include "header.h"
#include <algorithm>




string Function::min(vector<string>Vector)
{
	std::sort(Vector.begin(), Vector.end());

	return Vector[0];
}

int Function::min(vector<int>Vector)
{
	int vectorMin = Vector[0];
	for (int i = 0; i < Vector.size(); i++)
	{
		if (Vector[i] < vectorMin)
			vectorMin = Vector[i];
		
	}
	return vectorMin;
}

double Function::min(vector<double>Vector)
{
	double vectorMin = Vector[0];
	for (int i = 0; i < Vector.size(); i++)
		if (Vector[i] < vectorMin)
			vectorMin =Vector[i];
	return vectorMin;
}