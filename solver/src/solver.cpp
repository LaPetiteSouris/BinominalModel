//
// Created by tung on 15/11/17.
//
#include <stdexcept>
#include "../include/solver.h"

using namespace std;

double SolvebyBisection(double (*func)(double x),

                         double a,
                         double b,
                         double tol,
                         double nmax) {
    if (a < b && ((func(a) < 0 && func(b) > 0) || (func(a) > 0 && func(b) < 0))) {
        int n = 0;
        double c = 0;
        //limit iterations to prevent infinite loop
        while (n < nmax) {
            //new midpoint
            c = (a + b) / 2;
            // solution found
            if (func(c) == 0 || ((b - a) / 2) < tol) {
                return c;
            }
            n += 1;
            // New interval
            if ((func(c)*func(a)) > 0) {
                a=c;
                b=c;
            }

        }

    } else {
        throw invalid_argument("function conditions do not satisfy");
    }
    throw out_of_range("function out of range. No root found");
}

