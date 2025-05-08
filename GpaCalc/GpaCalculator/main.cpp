#include <iostream>
#include "Course.h"
#include "US4ScaleConverter.h"
#include "IGradeConverter.h"
#include "SemesterRecord.h"
#include "Transcript.h"
#include "FileHandler.h"

IGradeConverter* g_converter = new US4ScaleConverter();

int main() {
    try {
        // 指向根目录下的 test_data 文件夹里的 CSV
        FileHandler fh("test/test_data.csv");
        
        // 读取课程列表
        auto courses = fh.loadSemester();

        // 构建学期记录并计算 GPA
        SemesterRecord sem;
        for (const auto& c : courses) {
            sem.addCourse(c);
        }

        std::cout << "Loaded " << courses.size() << " courses.\n";
        std::cout << "GPA: " << sem.computeGPA() << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    return 0;
}