#include "US4ScaleConverter.h"
#include <stdexcept>

double US4ScaleConverter::toPoint(const std::string& grade) const {
    double pct = std::stod(grade);
    if (pct >= 93.00) return 4.0;
    if (pct >= 90.00) return 3.7;
    if (pct >= 87.00) return 3.3;
    if (pct >= 83.00) return 3.0;
    if (pct >= 80.00) return 2.7;
    if (pct >= 77.00) return 2.3;
    if (pct >= 73.00) return 2.0;
    if (pct >= 70.00) return 1.7;
    return 0.0;
}