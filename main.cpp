#include <iostream>
#include <fstream>
#include <vector>
#include "affine_transformation.h"

int main() {
    // Open the input file
    std::ifstream fi;
    fi.open("input.txt");
    if (!fi.is_open()) {
        std::cout << "Error opening input file!" << std::endl;
        return 1;
    }

    // Read the number of conversions
    int n = 0;
    fi >> n;
    std::cout << "n = " << n << std::endl;

    // Read the starting point
    Point startPoint;
    fi >> startPoint.x >> startPoint.y;
    std::cout << "starting point: " << startPoint.x << " " << startPoint.y << std::endl << std::endl;

    // Read transformations as pairs of two-by-two matrices and vectors of two elements
    AffineTransformation transformations;

    for (int i = 0; i < 3; i++) {
        // Read the matrix
        matrix m;

        for (int j = 0; j < 2; j++) {
            std::vector<double> vec;
            for (int k = 0; k < 2; k++) {
                double el;
                fi >> el;
                vec.push_back(el);
            }
            m.push_back(vec);
        }

        // Read the vector
        vector v;

        for (int h = 0; h < 2; h++) {
            double el = 0.0;
            fi >> el;
            v.push_back(el);
        }

        // Add the pair to the functor
        transformations.add(std::make_pair(m, v));
    }

    fi.close();

    // Open the output file
    std::ofstream fo;
    fo.open("output.txt");
    if (!fo.is_open()) {
        std::cout << "Error opening output file!" << std::endl;
        return 1;
    }

    // Perform transformations
    Point currentPoint = startPoint;

    // Perform an affine transformation using functor and write the resulting point to the output file
    std::cout << "performing transformations...\n" << std::endl;
    for (int i = 0; i < n; i++) {
        transformations(currentPoint);
        fo << currentPoint.x << " " << currentPoint.y << "\n";
    }
    fo.close();

    std::cout << "end of work" << std::endl;

    return 0;
}