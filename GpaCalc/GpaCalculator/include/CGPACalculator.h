#ifndef CGPACALCULATOR_H         
#define CGPACALCULATOR_H

#include <vector>               
#include <string>               
#include "Course.h"             

// CGPACalculator class definition
class CGPACalculator {
public:
    // Constructor with CSV file path
    explicit CGPACalculator(const std::string& csvPath);
    
    // Function to add a new course
    void addCourse(const Course& course);
    
    // Function to compute current semester GPA
    double computeGPA() const;
    
    // Function to compute cumulative GPA
    double computeCGPA() const;
    
    // Function to get all courses
    const std::vector<Course>& getCourses() const;

private:
    std::vector<Course> courses_;    
    std::string csvPath_;            
};

#endif 
