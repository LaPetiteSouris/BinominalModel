// BinominalModel.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <math.h>
#include "../include/solver.h"


using namespace std;
double myfunct(double x){
    return pow(x,3)-x-2.0;
}
int main() {

    double root = SolvebyBisection(myfunct, 1, 2, 0.000001, 100000);
    cout << root;
    return 0;
}
