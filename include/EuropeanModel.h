//
// Created by tung on 11/6/17.
//

#ifndef BINOMIALPRICER_EUROPEANMODEL_H
#define BINOMIALPRICER_EUROPEANMODEL_H

#include "BinomialModel.h"

class EuropeanModel : public BinominalModel {
public:
    EuropeanModel(double S0, double U, double D, double R, double X);

    double getStockPriceAtNode(double n);
};

#endif //BINOMIALPRICER_EUROPEANMODEL_H
