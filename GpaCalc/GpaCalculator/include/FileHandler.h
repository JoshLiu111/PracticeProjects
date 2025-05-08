#pragma once
#include <string>
#include <vector>
#include "Course.h"

// FileHandler class for managing course data persistence
class FileHandler {
    public:
        // Constructor with file path
        explicit FileHandler(const std::string& path);
        
        // Load semester courses from file
        std::vector<Course> loadSemester() const;
        
        // Save transcript data to file
        void saveTranscript(const std::string& path, const std::vector<Course>& courses) const;
    
    private:
        std::string filepath;    
};