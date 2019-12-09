#include "header.h"
#include <algorithm>

int Function::median(vector<int> Vector) {
	std::sort(Vector.begin(), Vector.end());
	return Vector[Vector.size() / 2];
}
double Function::median(vector<double> Vector) {
	std::sort(Vector.begin(), Vector.end());
	return Vector[Vector.size() / 2];
}
string Function::median(vector<string> Vector) {
	std::sort(Vector.begin(), Vector.end());
	return Vector[Vector.size() / 2];
}