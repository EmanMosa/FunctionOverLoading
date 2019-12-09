#include "header.h"
#include <algorithm>

int Function::median(vector<int> Vector) {
	std::sort(Vector.begin(), Vector.end());
	if ((Vector.size() / 2) % 2 == 0)
		return Vector[Vector.size() / 2];
	else
		return Vector[(Vector.size()) + 1 / 2];
}
double Function::median(vector<double> Vector) {
	std::sort(Vector.begin(), Vector.end());
	if((Vector.size() / 2)%2==0)
		return Vector[Vector.size() / 2];
	else
		return Vector[(Vector.size())+1 / 2];

}
string Function::median(vector<string> Vector) {
	std::sort(Vector.begin(), Vector.end());
	//for (int i = 0; i < Vector.size(); i++)
	//		std::cout << Vector[i]+" ";
	if ((Vector.size() / 2) % 2 == 0)
		return Vector[Vector.size() / 2];
	else
		return Vector[(Vector.size()) + 1 / 2];
}