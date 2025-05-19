/********************************************************************************
** Form generated from reading UI file 'write.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITE_H
#define UI_WRITE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Write
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *Write)
    {
        if (Write->objectName().isEmpty())
            Write->setObjectName("Write");
        Write->resize(320, 82);
        buttonBox = new QDialogButtonBox(Write);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(230, 10, 81, 221));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        textEdit = new QTextEdit(Write);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 30, 211, 31));
        textEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        textEdit->setTabChangesFocus(false);
        textEdit->setPlaceholderText(QString::fromUtf8("oem | partition"));
        label = new QLabel(Write);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 211, 18));

        retranslateUi(Write);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Write, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Write, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Write);
    } // setupUi

    void retranslateUi(QDialog *Write)
    {
        Write->setWindowTitle(QCoreApplication::translate("Write", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Write", "Please, type custom value below:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Write: public Ui_Write {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITE_H
