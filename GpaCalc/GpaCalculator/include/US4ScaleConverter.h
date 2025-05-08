#pragma once
#include "IGradeConverter.h"
#include <string>

class US4ScaleConverter: public IGradeConverter {
    public:
        virtual double toPoint(const std::string& grade) const;
};