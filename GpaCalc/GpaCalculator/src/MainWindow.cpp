#include "MainWindow.h"          
#include "CourseDialog.h"        
#include "ui_MainWindow.h"       
#include <QFileDialog>
#include <QTableWidgetItem>
#include <QPushButton>            
#include <QAction>                
#include <QDialogButtonBox>       
#include <QMessageBox>           
#include <iostream>              

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)                  
    , ui(new Ui::MainWindow)               
    , calculator_("test/test_data.csv")    
{
    ui->setupUi(this);                     
    
    // Connect button click signals to their respective slot functions
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::onAddCourse);
    connect(ui->computeButton, &QPushButton::clicked, this, &MainWindow::onCompute);
    
    
    refreshTable();                        // Initialize the course table
}

MainWindow::~MainWindow() {
    delete ui;                             // Clean up UI resources
}

void MainWindow::onAddCourse() {
    CourseDialog dlg(this);                // Create a new course dialog
    
    // Show dialog and check if user clicked OK
    if (dlg.exec() == QDialog::Accepted) {
        Course course = dlg.getCourse();   // Get course information from dialog
        calculator_.addCourse(course);     // Add course to calculator
        refreshTable();                    // Update the display
    }
}

void MainWindow::onCompute() {
    try {
        // Calculate GPA and CGPA
        double gpa = calculator_.computeGPA();
        double cgpa = calculator_.computeCGPA();
        
        // Update UI labels with calculated values
        ui->gpaLabel->setText(QString::number(gpa, 'f', 2));
        ui->cgpaLabel->setText(QString::number(cgpa, 'f', 2));
    } catch (const std::exception& e) {
        // Show error message if calculation fails
        QMessageBox::warning(this, tr("Error"), tr("Failed to compute GPA"));
    }
}

void MainWindow::refreshTable() {
    const auto& courses = calculator_.getCourses();    // Get list of courses
    ui->courseTable->setRowCount(courses.size());      // Set number of rows
    
    // Populate table with course information
    for (int i = 0; i < (int)courses.size(); ++i) {
        const auto& c = courses[i];
        // Add course information to each column
        ui->courseTable->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(c.name)));
        ui->courseTable->setItem(i, 1, new QTableWidgetItem(QString::number(c.credit)));
        ui->courseTable->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(c.grade)));
        ui->courseTable->setItem(i, 3, new QTableWidgetItem(QString::number(c.getGradePoint(), 'f', 2)));
    }
}