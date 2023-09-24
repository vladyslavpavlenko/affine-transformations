#ifndef LABTEST_AFFINE_TRANSFORMATION_H
#define LABTEST_AFFINE_TRANSFORMATION_H

#include <iostream>
#include <random>

struct Point {
    double x = 0;
    double y = 0;
};

typedef std::vector<std::vector<double>> matrix;
typedef std::vector<double> vector;

class AffineTransformation {
private:
    std::vector<std::pair<matrix, vector>> ats;
public:
    void add(const std::pair<matrix, vector>& at);

    void operator()(Point &p);
};

#endif