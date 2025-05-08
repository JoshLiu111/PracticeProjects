#include "Course.h"              
#include <map>                   
#include <stdexcept>             
#include <iostream>              

// Function to convert grade to grade points
double Course::getGradePoint() const {
    // Static map of grade to grade points
    static const std::map<std::string, double> gradePoints = {
        {"A+", 4.0}, {"A", 4.0}, {"A-", 3.7},
        {"B+", 3.3}, {"B", 3.0}, {"B-", 2.7},
        {"C+", 2.3}, {"C", 2.0}, {"C-", 1.7},
        {"D+", 1.3}, {"D", 1.0}, {"D-", 0.7},
        {"F", 0.0}
    };
    
    // Debug output for grade conversion
    std::cout << "Converting grade: " << grade << std::endl;
    
    // Find grade in map
    auto it = gradePoints.find(grade);
    if (it != gradePoints.end()) {
        std::cout << "Found grade point: " << it->second << std::endl;
        return it->second;
    }
    
    // Return 0.0 for invalid grades
    return 0.0;
}

