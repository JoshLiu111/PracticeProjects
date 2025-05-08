#pragma once
#include <vector>
#include "Course.h"

// SemesterRecord class for managing courses in a semester
class SemesterRecord {
    public:
        // Add a course to the semester
        void addCourse(const Course& c);
        
        // Calculate semester GPA
        double computeGPA() const;
        
        // Get all courses in the semester
        const std::vector<Course>& getCourse() const;

    private:
        std::vector<Course> courses;    // Vector to store semester courses
};