//
// Created by tung on 11/6/17.
//

#ifndef BINOMIALPRICER_BINOMIALMODEL_H
#define BINOMIALPRICER_BINOMIALMODEL_H

class BinominalModel {

protected:
    // S0= current stock price
    // U up rate
    // D downrate
    // riskless rate per period
    // X strike price
    double S0, U, D, R, X;
public:
    BinominalModel(double S0, double U, double D, double R, double X);

    int isArbitrage();

    double calculateP();

    double combination(double n, double k);

    virtual double getStockPriceAtNode(double n);
};

#endif //BINOMIALPRICER_BINOMIALMODEL_H
