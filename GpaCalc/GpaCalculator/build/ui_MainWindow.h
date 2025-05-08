/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *courseTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *computeButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *gpaLabel;
    QLabel *label_2;
    QLabel *cgpaLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        courseTable = new QTableWidget(centralwidget);
        if (courseTable->columnCount() < 4)
            courseTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        courseTable->setObjectName("courseTable");

        verticalLayout->addWidget(courseTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        computeButton = new QPushButton(centralwidget);
        computeButton->setObjectName("computeButton");

        horizontalLayout->addWidget(computeButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        gpaLabel = new QLabel(centralwidget);
        gpaLabel->setObjectName("gpaLabel");

        horizontalLayout_2->addWidget(gpaLabel);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        cgpaLabel = new QLabel(centralwidget);
        cgpaLabel->setObjectName("cgpaLabel");

        horizontalLayout_2->addWidget(cgpaLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 38));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GPA Calculator", nullptr));
        QTableWidgetItem *___qtablewidgetitem = courseTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = courseTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = courseTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = courseTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Grade Points", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add Course", nullptr));
        computeButton->setText(QCoreApplication::translate("MainWindow", "Compute GPA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "GPA:", nullptr));
        gpaLabel->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CGPA:", nullptr));
        cgpaLabel->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
