#ifndef COURSE_H                 
#define COURSE_H

#include <string>               
#include "IGradeConverter.h"

// Course class definition
class Course {
    public:
        std::string name;           
        double credit;              // Course credit hours
        std::string grade;          // Course grade (e.g., "A", "B+", etc.)
        
        // Default constructor
        Course() : credit(0) {}     // Initialize credit to 0
        
        // Parameterized constructor
        Course(const std::string& n, double c, const std::string& g)
            : name(n), credit(c), grade(g) {}
        
        // Function to convert grade to grade points
        double getGradePoint() const;
        
    private:
        static double convertGradeToPoint(const std::string& grade);
};

#endif // COURSE_H
