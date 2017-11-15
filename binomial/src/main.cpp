// BinominalModel.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <math.h>
#include "../include/EuropeanModel.h"


using namespace std;

int main() {
    cout << "Binominal Pricing " << endl;
    double S0, U, D, R, X, n;
    cout << "Enter stock price S0: " << endl;
    cin >> S0;
    cout << "Enter Up value U: " << endl;
    cin >> U;
    cout << "Enter Down value D: " << endl;
    cin >> D;
    cout << "Enter Rate: " << endl;
    cin >> R;
    cout << "Enter strike price: " << endl;
    cin >> X;
    cout << "Enter node value: " << endl;
    cin >> n;
    EuropeanModel *european_pricer = new EuropeanModel(S0, U, D, R, X);
    if (european_pricer->isArbitrage() == -1) {
        cout << "Illegal value ranges. Terminating ..." << endl;
        return 1;
    }
    if (european_pricer->isArbitrage() == 1) {
        cout << "Arbitrage exists ..." << endl;
        return 1;
    }
    double price = european_pricer->getCallOptionPrice(n);
    cout << "Call option price is: " << price << endl;


    return 0;
}
