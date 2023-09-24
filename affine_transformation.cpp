#include "affine_transformation.h"

// add adds a pair consisting of a matrix and a vector to the vector of affine transformations
void AffineTransformation::add(const std::pair<matrix, vector> &at) {
    ats.push_back((at));
}

void AffineTransformation::operator()(Point &p) {
    // Make a random generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Shuffle the vector of transformations to randomly choose a transformation
    std::shuffle(ats.begin(), ats.end(), gen);

    // Commit the first (random) affine transformation to the point
    p.x = ats.at(0).first[0][0] * p.x + ats.at(0).first[0][1] * p.y + ats.at(0).second.at(0);
    p.y = ats.at(0).first[1][0] * p.x + ats.at(0).first[1][1] * p.y + ats.at(0).second.at(1);
}