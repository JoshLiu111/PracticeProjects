#pragma once
#include <vector>
#include "SemesterRecord.h"

// Transcript class for managing multiple semester records
class Transcript {
    public:
        // Add a semester record to the transcript
        void addSemester(const SemesterRecord& sem);

        // Calculate cumulative GPA
        double computeCGPA() const;

        // Get all semester records
        const std::vector<SemesterRecord>& getSemesters() const;
    
    private:
        std::vector<SemesterRecord> semesters;    
};