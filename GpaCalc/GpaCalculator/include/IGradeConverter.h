#pragma once
#include <string>

class IGradeConverter {
    public:
        virtual ~IGradeConverter() {}
        virtual double toPoint(const std::string& grade) const=0;

};