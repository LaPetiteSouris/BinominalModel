// BinominalModel.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <math.h>
#include "../include/solver.h"


using namespace std;
double myfunct(double x){
    return x-4.0;
}
int main() {

    double root = SolvebyBisection(myfunct, 2, 4, 0.1, 100);
    cout << root;
    return 0;
}
