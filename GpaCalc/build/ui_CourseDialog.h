/********************************************************************************
** Form generated from reading UI file 'CourseDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEDIALOG_H
#define UI_COURSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CourseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QSpinBox *creditSpinBox;
    QLabel *label_3;
    QComboBox *gradeComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CourseDialog)
    {
        if (CourseDialog->objectName().isEmpty())
            CourseDialog->setObjectName("CourseDialog");
        CourseDialog->resize(400, 200);
        verticalLayout = new QVBoxLayout(CourseDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(CourseDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        nameEdit = new QLineEdit(CourseDialog);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nameEdit);

        label_2 = new QLabel(CourseDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        creditSpinBox = new QSpinBox(CourseDialog);
        creditSpinBox->setObjectName("creditSpinBox");
        creditSpinBox->setMinimum(1);
        creditSpinBox->setMaximum(10);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, creditSpinBox);

        label_3 = new QLabel(CourseDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        gradeComboBox = new QComboBox(CourseDialog);
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->addItem(QString());
        gradeComboBox->setObjectName("gradeComboBox");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, gradeComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(CourseDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CourseDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CourseDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CourseDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CourseDialog);
    } // setupUi

    void retranslateUi(QDialog *CourseDialog)
    {
        CourseDialog->setWindowTitle(QCoreApplication::translate("CourseDialog", "Add Course", nullptr));
        label->setText(QCoreApplication::translate("CourseDialog", "Course Name:", nullptr));
        label_2->setText(QCoreApplication::translate("CourseDialog", "Credits:", nullptr));
        label_3->setText(QCoreApplication::translate("CourseDialog", "Grade:", nullptr));
        gradeComboBox->setItemText(0, QCoreApplication::translate("CourseDialog", "A+", nullptr));
        gradeComboBox->setItemText(1, QCoreApplication::translate("CourseDialog", "A", nullptr));
        gradeComboBox->setItemText(2, QCoreApplication::translate("CourseDialog", "A-", nullptr));
        gradeComboBox->setItemText(3, QCoreApplication::translate("CourseDialog", "B+", nullptr));
        gradeComboBox->setItemText(4, QCoreApplication::translate("CourseDialog", "B", nullptr));
        gradeComboBox->setItemText(5, QCoreApplication::translate("CourseDialog", "B-", nullptr));
        gradeComboBox->setItemText(6, QCoreApplication::translate("CourseDialog", "C+", nullptr));
        gradeComboBox->setItemText(7, QCoreApplication::translate("CourseDialog", "C", nullptr));
        gradeComboBox->setItemText(8, QCoreApplication::translate("CourseDialog", "C-", nullptr));
        gradeComboBox->setItemText(9, QCoreApplication::translate("CourseDialog", "D+", nullptr));
        gradeComboBox->setItemText(10, QCoreApplication::translate("CourseDialog", "D", nullptr));
        gradeComboBox->setItemText(11, QCoreApplication::translate("CourseDialog", "F", nullptr));

    } // retranslateUi

};

namespace Ui {
    class CourseDialog: public Ui_CourseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEDIALOG_H
