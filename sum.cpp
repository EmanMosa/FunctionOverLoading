#include "header.h"


int Function:: sum(vector<int> Vector){
   int sum  = 0;
    for (auto x : Vector){
        sum=sum+x;
    }
    return sum;
  
}

double Function::sum(vector<double>Vector){
    double sum=0;
     for (auto x : Vector){
           sum=sum+x;
       }
    return sum;

}

string Function::sum(vector<string>Vector){
    string sum="";
    for (auto x : Vector){
        sum=sum+x;
    }

    return sum;

}
