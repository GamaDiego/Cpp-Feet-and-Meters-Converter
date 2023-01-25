//
//  Galvan.cpp
//  Feet and Meters Converter
//
//  Created by Diego Galván Magallón on 10/19/22.
//
//  Implementation File

#include "Galvan.hpp"
#include <cmath>

namespace galvan {
double feetToMeters(double feet) {
    double result;
    result = feet * 0.3048;
    result = floor(result * 100.0) / 100.0;
    return result;
}

double metersToFeet(double meters) {
    double result;
    result = meters / 0.3048;
    result = floor(result * 100.0) / 100.0;
    return result;
}
}
