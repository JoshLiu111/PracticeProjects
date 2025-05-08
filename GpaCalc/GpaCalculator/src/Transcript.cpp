#include "Transcript.h"

void Transcript::addSemester(const SemesterRecord& sem) {
    semesters.push_back(sem);
}

double Transcript::computeCGPA() const {
    double totalCredit = 0.0;
    double totalPoints = 0.0;
    for (const auto& sem : semesters) {
        for (const auto& c : sem.getCourse()){
        totalCredit += c.credit;
        totalPoints += c.credit * c.getGradePoint();
        }
    }
    return (totalCredit > 0.0) ? (totalPoints/totalCredit) : 0.0;
}

const std::vector<SemesterRecord>& Transcript::getSemesters() const {
    return semesters;
}