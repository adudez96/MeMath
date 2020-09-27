#include <string>
#include <iostream>
#include <sstream>

#include "vector3.h"

using namespace memath;


Vector3::Vector3(double _x, double _y, double _z) : x{_x}, y{_y}, z{_z} {}

Vector3::Vector3() : Vector3(0, 0, 0) {}

std::string Vector3::to_string() const {
    std::ostringstream r;
    r << "Vector3" << "(" << this->x << "," << this->y << "," << this->z << ")";
    return r.str();
}

std::ostream& memath::operator<<(std::ostream &strm, const Vector3 &a) {
    strm << a.to_string();
    return strm;
}
