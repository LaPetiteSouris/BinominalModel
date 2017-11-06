//
// Created by tung on 11/6/17.
//

#include "../include/BinomialModel.h"

BinominalModel::BinominalModel(double s0, double u, double d, double r, double x) {
    S0 = s0;
    U = u;
    D = d;
    R = r;
    X = x;
}

int BinominalModel::isArbitrage() {
    if (S0 < 0.0 || R <= -1.0 || U <= -1.0, U <= D || D <= -1.0) {
        return -1;
    }
    if (D >= R || R >= U) {
        return 1;
    }
    return 0;

}

double BinominalModel::calculateP() {
    return (R - D) / (U - D);

}

double BinominalModel::combination(double n, double k) {
    if (k > n) {
        return 0;
    }
    double r = 1.0;
    for (double d = 1.0; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

double BinominalModel::getStockPriceAtNode(double n) {
    return 0;
}