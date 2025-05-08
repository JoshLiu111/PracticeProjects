#include "CGPACalculator.h"     
#include <fstream>              
#include <sstream>              
#include <iostream>             

// Constructor implementation
CGPACalculator::CGPACalculator(const std::string& csvPath)
    : csvPath_(csvPath)         // Initialize CSV file path
{
    // Load existing courses from CSV file
    std::ifstream file(csvPath);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string name, grade;
            double credit;
            
            // Parse CSV line
            if (std::getline(ss, name, ',') &&
                ss >> credit &&
                ss.ignore() &&
                std::getline(ss, grade)) {
                
                // Create and add course
                Course course;
                course.name = name;
                course.credit = credit;
                course.grade = grade;
                courses_.push_back(course);
            }
        }
    }
}

// Function to add a new course
void CGPACalculator::addCourse(const Course& course) {
    courses_.push_back(course);     
    
    // Save to CSV file
    std::ofstream file(csvPath_, std::ios::app);
    if (file.is_open()) {
        file << course.name << "," 
             << course.credit << "," 
             << course.grade << "\n";
    }
}

// Function to compute current semester GPA
double CGPACalculator::computeGPA() const {
    if (courses_.empty()) return 0.0;
    
    double totalPoints = 0.0;
    double totalCredits = 0.0;
    
    // Calculate weighted average
    for (const auto& course : courses_) {
        totalPoints += course.getGradePoint() * course.credit;
        totalCredits += course.credit;
    }
    
    return totalCredits > 0 ? totalPoints / totalCredits : 0.0;
}

// Function to compute cumulative GPA
double CGPACalculator::computeCGPA() const {
    return computeGPA();    // Currently same as semester GPA
}

// Function to get all courses
const std::vector<Course>& CGPACalculator::getCourses() const {
    return courses_;
}
