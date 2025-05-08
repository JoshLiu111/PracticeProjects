#include "SemesterRecord.h"

void SemesterRecord::addCourse(const Course& c) {
    courses.push_back(c);
}

double SemesterRecord::computeGPA() const {
    double totalCredit = 0.0;
    double totalPoints = 0.0;
    //Iterate and accumulate
    for (const auto& c : courses) {
        totalCredit += c.credit;
        totalPoints += c.credit * c.getGradePoint();
    }
    return (totalCredit > 0.0) ? (totalPoints/totalCredit) : 0.0;
}

const std::vector<Course>& SemesterRecord::getCourse() const {
    return courses;
}