//
// Created by tung on 11/6/17.
//
#include <cmath>
#include "../include/EuropeanModel.h"

EuropeanModel::EuropeanModel(double S0, double U, double D, double R, double X) : BinominalModel(S0, U, D, R, X) {}

double EuropeanModel::getStockPriceAtNode(double n) {
    double Rn = pow(R, n);
    double P = calculateP();
    double Csum = 0.0;
    for (int j = 0; j <= n; j++) {
        double comb = combination(n, j);
        // Su^jd^(n-j)
        double Sud = S0 * pow(U, j) * pow(D, n - j);
        if (Sud < X) {
            Sud = 0.0;
        }
        double C = comb * pow(P, j) * pow(1 - P, n - j) * (Sud - X);
        Csum += C;

    }
    Csum = Csum * (1 / Rn);
    return Csum;
};