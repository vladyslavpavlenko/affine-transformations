# Affine Transformations Functors Lab

Write a class of functors. The class object is initialized by affine transformations f_1, f_2, ... , f_k that act on the plane. The () operator takes a point as input, applies one of the specified transformations to it, and returns its result. The transformation is chosen randomly.

The affine transformation of a Euclidean space can be given as f(x) = Mx + v, where M is a square matrix, x, v are vectors. In the case of a plane, the matrix will have dimensions 2x2.

Write a program that reads from a text file a positive integer n, the initial point and affine transformations. As output, the program writes the generated sequence of n points to a text file.

The starting point is the given initial point, each subsequent point in the sequence is obtained by the previous one by applying a random affine transformation to it from the list of given ones.

The 2x2 matrix and the vector that define the affine transformations are given by 6 real numbers, placed on one line of the text file, separated by a space (first the elements of the first line, then the elements of the second line of the matrix, then the elements of the vector).

The format of the image of points in files: on one line, separated by a space, first the x-coordinate, then the y-coordinate

**Run the program on the following data and get the resulting file:**
100000
0 0
transformation 1: f(x) = x/2 + (0, 1/2)
transformation 2: f(x) = x/2 + (1/2, 0)
transformation 3: f(x) = x/2
_Note. The above transformations should be written in matrix form._

### Collaborators
[seemsod1](https://github.com/seemsod1)
[OleksandrBazhyn](https://github.com/OleksandrBazhyn)
