/********************************************************************************
** Form generated from reading UI file 'addcomponent.ui'
**
** Created: Wed Mar 12 22:40:42 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPONENT_H
#define UI_ADDCOMPONENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddComponent
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPower;
    QComboBox *comboBoxType;

    void setupUi(QDialog *AddComponent)
    {
        if (AddComponent->objectName().isEmpty())
            AddComponent->setObjectName(QString::fromUtf8("AddComponent"));
        AddComponent->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddComponent);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AddComponent);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 57, 15));
        label_2 = new QLabel(AddComponent);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 57, 15));
        label_3 = new QLabel(AddComponent);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 140, 57, 15));
        lineEditName = new QLineEdit(AddComponent);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(70, 40, 113, 23));
        lineEditPower = new QLineEdit(AddComponent);
        lineEditPower->setObjectName(QString::fromUtf8("lineEditPower"));
        lineEditPower->setGeometry(QRect(70, 140, 113, 23));
        comboBoxType = new QComboBox(AddComponent);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        comboBoxType->setGeometry(QRect(70, 90, 79, 23));

        retranslateUi(AddComponent);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddComponent, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddComponent, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddComponent);
    } // setupUi

    void retranslateUi(QDialog *AddComponent)
    {
        AddComponent->setWindowTitle(QApplication::translate("AddComponent", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddComponent", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddComponent", "Type", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddComponent", "Power", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddComponent: public Ui_AddComponent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPONENT_H
