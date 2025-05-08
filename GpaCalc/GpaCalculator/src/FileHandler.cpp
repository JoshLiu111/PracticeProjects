#include "FileHandler.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

// Constructor implementation
FileHandler::FileHandler(const std::string& path)
    : filepath(path) {}

// Load semester courses from file
std::vector<Course> FileHandler::loadSemester() const {
    std::vector<Course> courses;
    std::ifstream in(filepath);
    if (!in.is_open()) {
        throw std::runtime_error("Cannot open file: " + filepath);
    }
    std::string line;
    while (std::getline(in, line)) {
        if (line.empty()) continue;
        std::stringstream ss(line);
        Course c;
        std::string name, creditStr, grade;
        std::getline(ss,c.name,',');
        std::getline(ss,creditStr,',');
        double credit = std::stod(creditStr);
        std::getline(ss, grade);

        courses.emplace_back(name,credit,grade);
    }
    return courses;
}

