//
// Created by tung on 11/6/17.
//
#include <cmath>
#include "../include/EuropeanModel.h"

using namespace std;

EuropeanModel::EuropeanModel(double S0, double U, double D, double R, double X) : BinominalModel(S0, U, D, R, X) {}

double EuropeanModel::getCallOptionPrice(double n) {
    double Rn = pow(exp(R), n);
    double P = calculateP();
    double Csum = 0.0;
    for (int j = 0; j <= n; j++) {
        double comb = combination(n, j);
        // Su^jd^(n-j)
        double Sud = S0 * pow(U, j) * pow(abs(D), n - j);
        double C = comb * pow(P, j) * pow(1 - P, n - j) * (Sud - X);
        if (Sud < X) {
            C = 0.0;
        }
        Csum += C;

    }
    Csum = Csum * (1 / Rn);
    return Csum;
};