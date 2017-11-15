//
// Created by tung on 15/11/17.
//

#ifndef BINOMIALPRICER_SOLVER_H
#define BINOMIALPRICER_SOLVER_H

double SolvebyBisection(double (*func)(double x),

                     double a,
                     double b,
                     double tol,
                     double nmax
);

#endif //BINOMIALPRICER_SOLVER_H
