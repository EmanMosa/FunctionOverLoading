#include "header.h"
#include <algorithm>



string Function::max(vector<string>Vector)
{
	std::sort(Vector.begin(), Vector.end());

	return Vector[Vector.size()-1];
}

int Function::max(vector<int>Vector)
{
	int vectorMax = Vector[0];
	for (int i = 0; i < Vector.size(); i++)
	{
		if (Vector[i] >vectorMax)
			vectorMax = Vector[i];
	}
	return vectorMax;

}

double Function::max(vector<double>Vector)
{
	double vectorMax = Vector[0];
	for (int i = 0; i < Vector.size(); i++)
		if (Vector[i] > vectorMax)
			vectorMax = Vector[i];
	return vectorMax;
}