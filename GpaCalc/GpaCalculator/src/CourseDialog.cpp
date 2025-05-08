#include "CourseDialog.h"        
#include "ui_CourseDialog.h"     
#include <QMessageBox>           

CourseDialog::CourseDialog(QWidget* parent)
    : QDialog(parent)                          
    , ui(new Ui::CourseDialog)                 
{
    ui->setupUi(this);                         
    
    ui->nameEdit->setText("");                 
    ui->creditSpinBox->setValue(3);            
    ui->gradeComboBox->setCurrentText("A");    
}

CourseDialog::~CourseDialog() {
    delete ui;                                 
}

Course CourseDialog::getCourse() const {
    Course course;                             
    
    course.name = ui->nameEdit->text().toStdString();          
    course.credit = ui->creditSpinBox->value();                
    course.grade = ui->gradeComboBox->currentText().toStdString(); 
    
    return course;                             
}