#ifndef COURSEDIALOG_H           
#define COURSEDIALOG_H

#include <QDialog>              
#include "Course.h"             

// Forward declaration of UI namespace and class
namespace Ui {
class CourseDialog;
}

// CourseDialog class definition
class CourseDialog : public QDialog {   
    Q_OBJECT                            

public:
    // Constructor with optional parent widget
    explicit CourseDialog(QWidget* parent = nullptr);
    
    // Destructor
    ~CourseDialog();
    
    // Function to get course information from dialog
    Course getCourse() const;

private:
    Ui::CourseDialog* ui;               // Pointer to UI elements
};

#endif 