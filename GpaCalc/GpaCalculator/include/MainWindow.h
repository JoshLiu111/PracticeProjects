#ifndef MAINWINDOW_H              
#define MAINWINDOW_H

#include <QMainWindow>           
#include "CGPACalculator.h"       

// Forward declaration of UI namespace and class
namespace Ui {
class MainWindow;
}

// MainWindow class definition
class MainWindow : public QMainWindow {    
    Q_OBJECT                                

public:
    // Constructor with optional parent widget
    explicit MainWindow(QWidget* parent = nullptr);
    
    // Destructor
    ~MainWindow();

private slots:
    // Slot function called when Add Course button is clicked
    void onAddCourse();
    
    // Slot function called when Compute button is clicked
    void onCompute();
    
    // Function to refresh the course table display
    void refreshTable();

private:
    Ui::MainWindow* ui;                     
    CGPACalculator calculator_;             
};

#endif 