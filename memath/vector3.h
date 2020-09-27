#ifndef VECTOR3_H
#define VECTOR3_H

#include <string>
#include <iostream>

namespace memath {

class Vector3 {

public:
    double x;
    double y;
    double z;

    /**
     * Create new vector object with initial values `(_x, _y, _z)`.
     */
    Vector3(double _x, double _y, double _z);

    /**
     * Create new vector object with initial values `(0, 0, 0)`.
     */
    Vector3();

    /**
     * Build and return a string representation of this vector.
     */
    std::string to_string() const;

    /**
     * Override's the `<<` operator.
     */
    friend std::ostream& operator<<(std::ostream &strm, const Vector3 &a);

};

};

#endif
